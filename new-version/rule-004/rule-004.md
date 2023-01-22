# Rule 4 - `enum` Initialization Strategy

Initialization of `enum` type shall according to one of the following strategies:

- Not specifying any member
- Specifying only the first member
- Specifying all members

## Non-compliant

```c
enum eTag
{
   E1,
   E2 = 10,
   E3,
   E4 = 11,
}
```

Both `E3` and `E4` will become 11, but it unclear if this is a bug or by design.

## Compliant

```c
enum eTag
{
   E1 = 9,
   E2,
   E3,
   E4
}
```

```c
enum eTag
{
    E1 = 9,
    E2 = 10,
    E3 = 11,
    E4 = 11
}
```

## Rationale

If an initial value is not specified to a member of an `enum` type, the value of the immediately preceding member plus 1 will be specified to this member, in the special case that there in no preceding member so will 0 be specified.

If some initial values are specified while others are not, the same value may unintentionally be assigned to different members and may become the cause of unexpected behaviour.

To prevent the same value from being assigned to different members, initialization of the members must be by either not specifying any constants, specifying all the constants, or specifying only the first member, depending on the usage.

## Note

If some situations `enum` values shall be identical by design so is this possible but requires the strategy to specify all members to be applied.
