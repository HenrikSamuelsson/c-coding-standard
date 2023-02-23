# Integer Constant Comparison

Unsigned integer constant expressions shall use suffix to be described within the range that can be represented with the result type.

## Non-compliant

```c
#define MAX 0xFFFFU

unsigned int i = MAX;
if (i < MAX + 1)
{
    // ...
}

// The result varies depending on whether the int is 16 bits or 32 bits:
//    - 16 bits int will wrap around, the comparison will be false
//    - 32 bits int will not wrap around, the comparison will be true
```

## Compliant

```c
#define MAX 0xFFFFUL    // Specify long type, which is at least 32 bits

unsigned int i = MAX;
if (i < MAX + 1)
{
    // ...
}

// There will be no wrap around, code will be portable.
```

## Rationale

Unsigned integer operations in the C programming language wrap around without overflow (the result will be the remainder of the maximum representable value). Because the overflow is not flagged, there is a risk of not noticing when the operation result differs from the intended result. For example, when there are two environments that differ in the number of bits of int, the same constant expression produces different operation results, depending on whether they exceed the representable value range or not.

## References

[ESCR](../references.md#escr)
