# Rule 7 - Pointer Comparison

Comparison between pointers shall only be used when the pointers points at elements in the same array or members in the same structure.

## Non-compliant

```c
#define N    10

char a1[N];
char a2[N];

char *p = &a1[0];

while (p < a2 + N)
{
  // Operations involving p here, omitted for brevity
} 
```

## Compliant

```c
#define N    10

char a1[N];

char *p = &a1[0];

while (p < a1 + N)
{
  // Operations involving p here, omitted for brevity
} 
```

## Rationale

Comparing addresses of elements in different arrays or structures does not cause a compile error, but is meaningless because the address of the variable is implementation-dependent.

## References

[ESCR](../references.md#escr)
