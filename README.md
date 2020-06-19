e# C Coding Standard

C programming coding standard, according to ShinyGreenRobot.

## Spaces horizontal

End of line comments shall be separated from the code by 4 spaces.

```c
uint8_t i = 0;    /* Comment separated from the code by 4 spaces. */
```

**Pros**: Separation with spaces emphasize the distinction between the actual code and the comment, resulting in improved readability.

**Cons**: The extra spaces will leave less space for the comment, but this issue can be resolved by moving the comment above the code or make the comment multi-line.

## No Unreachable Code

There shall be no unreachable code in production code.

### Information

unreachable code is part of the source code of a program which can never be executed because there exists no control flow path to the code from the rest of the program.

There are various reasons for existence of unreachable code, it can be due to flaw in the design of the code, it can also be due to plans for future redesign where the code will be reachable.

### Noncompliant Example

```c
uint32_t tripleUp(uint32_t number)
{
    uint32_t result = 3 * number;

    return result;

    /* Unreachable code. */
    foo();
}
```

### Compliant Example

```c
uint32_t tripleUp(uint32_t number)
{
    uint32_t result = 3 * number;
    return result;
}
```

### Rationale

Unreachable code affects the readability negatively and shall hence be removed.

### Enforcement

Some types of unreachable code can be automatically detected by the compiler or static analyzers. Automated code coverage tests can also serve as hint that code might be unreachable. Unreachable code not detected in a automatic way needs to be found during code review.

### Notes

TODO Add notes on exception to the rule for error handling.

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
