# C Coding Standard

C programming coding standard, according to ShinyGreenRobot.

## Spaces horizontal

End of line comments shall be separated from the code by 4 spaces.

```c
uint8_t i = 0;    /* Comment separated from the code by 4 spaces. */
```

**Pros**: Separation with spaces emphasize the distinction between the actual code and the comment, resulting in improved readability.

**Cons**: The extra spaces will leave less space for the comment, but this issue can be resolved by moving the comment above the code or make the comment multi-line.

## Restrict usage

The ```restrict``` type qualifier shall not be used.

**Info:** The keyword ```restrict``` is type qualifier that since C99 be used in object pointer declarations. It provides a hint to the compiler that only this pointer will be used access the object. This will in some situations make it possible for the compiler to generate a more optimized result. The behavior of the code will be undefined if this guarantee is not meet.

**Pros:** Possibly a more optimized resulting binary file.

**Cons:** Burdens the design of the code to guarantee that the memory areas do not overlap.

**Verdict:** The benefit of using ```restrict``` does not outweigh the risk of bugs due to unintentionally failing to meet the needed guarantee.

## Align for loop control variable types

The type of the counter in a for loop shall be of the same type as the variable used for the comparison.

**Rationale:** There is a risk of unintentionally ending up in an infinite loop if mixing variables of different types due to that the types could have different ranges. In the below non-compliant example so will end up in an infinite loop if the parameter called argument is larger than 255.

**Non-compliant example:**  

```c
void function(uint32_t argument)
{
    uint8_t counter;
    for (counter = 0; counter < argument; counter++)
    {
        /* Omitted code. */
    }
}
```

**Compliant example:**  

```c
void function(uint32_t argument)
{
    uint32_t counter;
    for (counter = 0; counter < argument; counter++)
    {
        /* Omitted code. */
    }
}
```
