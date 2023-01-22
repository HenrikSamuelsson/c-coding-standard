# Rule 3 - Memory for Null Terminator in `char` Array

The size of a char array initialized by a string shall match the size of the string including the string terminating null character.

## Non-compliant

```c
#define SIZE 3    // 3 characters
char a[SIZE] = "abc";
```

## Compliant

```c
#define SIZE 4    // 3 characters plus 1 null character
char a[SIZE] = "abc";
```

```c
char a[] = "abc"    // Matching array size deduced automatically
```

## Rationale

Initializing an array with a string will not cause an error at declaration even if a space for a null character is not ensured in the array size. This is not a problem if described intentionally. However, when the array is used as an argument for a string handling function etcetera, the absence of a null character indicating the end of the string is more likely to cause unexpected behaviour.

## References

[ESCR](../references.md#escr)
