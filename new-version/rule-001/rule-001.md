# Rule 1 - Automatic Variable Initialization

Automatic variables shall be initialized before use.

## Non-compliant

```c
void f() 
{
    int i;
    i++;
}
```

## Compliant

```c
void f()
{
    int i = 0;
    i++;
}
```

## Rationale

The value of an non-initialized automatic variable is undefined and may differ depending on the environment.

## Note

Automatic variables can be initialized at the time of declaration or at a later time. The key is to ensure that initialization is always done before use.

## References

[ESCR](../references.md#escr)
