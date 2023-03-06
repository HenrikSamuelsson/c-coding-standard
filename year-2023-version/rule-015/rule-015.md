# Rule 14 - Loop Control Types

Loop iterator control variables shall be of types with compatible ranges.

## Non-compliant

```c
void f(int number)
{
    unsigned char c;
    for (c = 0; c < number; c++) 
    {
        // ...
    }
}
```

## Compliant

```c
void f(int number)
{
    unsigned int i;
    for (i = 0; i < number; i++) 
    {
        // ...
    }
}
```

## Rationale

Comparison between variables with different ranges of representable values as a loop iteration condition may produce unintended results and end up in an infinite loop.

## References

[ESCR](../references.md#escr)
