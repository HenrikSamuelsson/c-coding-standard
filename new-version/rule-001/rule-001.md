# Rule 1

> Automatic variables shall be initialized before use.

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

The value of an automatic variable is undefined until it have been initialized and may differ depending on the environment.

## Note

Automatic variables can be initialized at the time of declaration or at a later time if ensuring that initialization is always done before use.
