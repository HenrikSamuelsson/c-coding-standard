# Rule 10 - Avoid Floating-point Number Counters

Floating-point numbers shall not be used as loop counter.

## Non-compliant

```c
for (double d = 0.0; d < 1.0; d += 0.1)
{
    // ...
}
```

## Compliant

```c
for (int i = 0; i < 10; i++)
{
    // ...
}
```

## Rationale

If operations are repeatedly performed to a floating-point variable, the
intended result may not be achieved due to accumulated calculation errors. Therefore, integer type should be used for loop counters.

## References

[ESCR](../references.md#escr)
