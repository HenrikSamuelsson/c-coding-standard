# Rule 5 - Pointer Arithmetic

Pointer arithmetic operations shall be made only when the pointer points to an array and the result points within the range of the array.

## Non-compliant

```c
#define N    10

char buffer[N];
char *p = buffer;

*(p + 20) = 'z';
```

## Compliant

```c
#define N    10

char buffer[N];
char *p = buffer;

for (; (p < buffer + N) && (*p != '\0'); p++ )
{
  *p = 'z';
}
```

## Rationale

Pointer arithmetic operations are part of the C programming language but are dangerous and a common source of bugs. Care need to be taken to keep the pointer within the allowed memory range, i.e. within the array currently being worked on, to prevent manipulation of other data than intended by use of the pointer.

## Note

It is permissible to point to the area directly after the last element of an array as long
as the array element is not accessed. In other words, in the case where int `buffer[N]` and  `p = data`, `p + N`
complies with the rule as long as it is not used for accessing the array elements. Whereas using a construct such as
`*(p + N)` that accesses memory outside of the array is non-compliant.
