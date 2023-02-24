# Rule 11 - Structure and Union Comparison

`memcmp` shall not be used to compare structures and unions.

## Non-compliant

```c
typedef struct
{
    char c;
    long l;
} s_type;

s_type s1, s2;

if (memcmp(&s1, &s2, sizeof(s1)) == 0)
{
    // ...
}
```

## Compliant

```c
typedef struct
{
    char c;
    long l;
} s_type;

s_type s1, s2;

if (s1.c == s2.c && s1.l == s2.l)
{
    // ...
}
```

## Rationale

Memory for structures and unions may contain unused areas. Since the values in the areas are unknown, `memcmp` shall not be used when making comparisons of structures or unions, they should be made between the corresponding members.

## References

[ESCR](../references.md#escr)
