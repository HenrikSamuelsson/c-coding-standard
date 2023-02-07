# Rule 6 - Pointer Subtraction

Subtraction between pointers shall only be with pointers that address elements within one single array.

## Non-compliant

```c
#define N    10

ptrdiff_t diff;

int a1[N];
int a2[N];

int *p1 = &a1[0];
int *p2 = &a2[N-1];

diff = p2 - p1; 
```

## Compliant

```c
#define N    10

ptrdiff_t diff;

int a1[N];

int *p1 = &a1[0];
int *p2 = &a1[N-1];

diff = p2 - p1; 
```

## Rationale

In C language, subtraction between pointers expresses how many elements exist between the two elements pointed by each pointer, if each pointer points to a different array, the way the variables are laid out between them is implementation-dependent and the execution result is not guaranteed. This implies that subtraction between pointers is meaningful only when both pointers are pointing to elements in the same array. Therefore, before subtracting one pointer from another pointer, the programmer must ensure that both pointers are addressing elements of the same array

## Note

`ptrdiff_t` used in the examples above is a type of result of subtraction between pointers defined in `stddef.h`.

## References

[ESCR](../references.md#escr)
