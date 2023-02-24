# Rule 14 - Conditional Expression Return Type

Both return values of the conditional expression operator (`?:`) shall have the same type.

## Non-compliant

```c
void f(int i1, int i2, long w3)
{
    int j = i1 > 10 ? i2 : w3;

    // ...
}
```

## Compliant

```c
void f(int i1, int i2, long w3)
{
    int j = i1 > 10 ? i2 : (int) w3;

    // ...
}
```

## Rationale

When writing code using different types, perform a cast to specify which type is expected, to make the intentions clear.

## References

[ESCR](../references.md#escr)
