# Boolean Comparison

Boolean comparison expressions shall use false as the comparand, and not true.

## Non-compliant

```c
#define TRUE    1

if (f() == TRUE)
{
    // ...
}
```

## Compliant

```c
#define FALSE    0

if (f() != FALSE)
{
    // ...
}
```

## Rationale

In the C programming language, true is represented by any non-ero value, not necessarily 1. False is on the other hand always represented by 0 and is safe to compare against.

## Note

In general, when values such as logical values are defined as a range, do not make a judgment by finding whether or
not a value is equivalent to any particular value(representative value) within this range.

## References

[ESCR](../references.md#escr)
