# Rule 1.1

No dead code in the production version.

## Information

The definition of dead code in this context is; code that is executed but do not affect the program result.

Dead code can be anything that is not used, such as a variable, function, or parameter. Whole blocks of code can also be dead code if it does not do anything useful. Sections of commented out code also count as dead code.

## Noncompliant Example

```c
uint32_t blockVolume(uint32_t height, uint32_t width, uint32_t depth)
{
    uint32_t area;
    uint32_t volume;

    area = depth * width;
    // volume = area * height;
    volume = height * depth * width;

    return volume;
}
```

## Compliant Example

```c
uint32_t blockVolume(uint32_t height, uint32_t width, uint32_t depth)
{
    uint32_t volume;

    volume = height * depth * width;

    return volume;
}
```

## Exceptions

Modules that are intended to be reused as libraries in other projects are a allowed the include functions and types not used in the current project.

## Rationale

Dead code affects the readability negatively and might cause the software to consume unnecessary resources.

## Enforcement

The compiler can detect some dead code and shall be setup to report occurrences of dead code. Static analyzers can also be used to detect dead code. Dead code can also be detected during code review and shall be removed before incorporating the code into the production code base.
