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

Pointer arithmetic operations are part of the C programming language but are dangerous and a common source of bugs since it is easy to make a mistake.