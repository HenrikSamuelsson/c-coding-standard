# Rule 2

`const` variables shall be initialized at the time of declaration.

## Non-compliant

```c
const int N;
```

## Compliant

```c
const int N = 10;
```

## Rationale

A const variable shall be initialized at the time of declaration due to that it cannot be assigned to subsequently.

## Note

Missing initialization at declaration does not cause a compile error.

## References

[ESCR](../references.md#escr)
