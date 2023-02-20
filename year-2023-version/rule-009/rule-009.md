# Rule 9 - Careful Floating-point Number Comparison

Lack in precision of floating point numbers shall be taken into account when combined with relational operators.

## Non-compliant

```c
void f(double d1, double d2)
{
    if (d1 == d2)
    {
        // ...
    }
}
```

## Compliant

```c
#define LIMIT 1.0e-4

void f(double d1, double d2)
{
    double diff = d1 - d2;
    if (-LIMIT <= diff && diff <= LIMIT) 
    {
        // ...
    }
}
```

## Rationale

In case of a floating-point type, values written in the source code do not exactly match with those actually implemented. Therefore, the comparison results must be judged by taking account of available precision.

## References

[ESCR](../references.md#escr)
