# Conditional statements in C++

C++ has `if`-`else` and `switch` to determine whether statements would execute based on a given condition.

## `if` statement

Use `if` to specify a block of code to be executed, if a specified condition is `true`.
The syntax is as follows.

```cpp
if (condition) {
    // statements
}
```

For example,

```cpp title="test-if.cpp" linenums="1"
--8<-- "snippets/test-if.cpp"
```

### `else` statement

Use `else` to specify a block of code to be executed, if the same condition is `false`.
The syntax is as follows.

```cpp
if (condition)
{
    // statements
}
else
{
    // other statements
}
```

For example,

```cpp title="test-if-else.cpp" linenums="1"
--8<-- "snippets/test-if-else.cpp"
```

### `else if` statement

Use the `else if` statement to specify a new condition if the first condition is `false`.
The syntax is as follows.

```cpp
if (condition1)
{
    // statements for condition1
}
else if (condition2)
{
    // statements for condition2
}
else
{
    // other statements
}
```

For example,

```cpp title="test-if-elif-else.cpp" linenums="1"
--8<-- "snippets/test-if-elif-else.cpp"
```

### Takeaway

Only `if` is required, `else` and `else if` are both optional.

### Ternary Operator

```cpp
variable = (condition) ? valueIfTrue: valueIfFalse
```

This is equivalent to

```cpp
if (condition)
{
    variable = valueIfTrue;
}
else
{
    variable = valueIfFalse;
}
```

For example,

```cpp title="show-num-records.cpp" linenums="1"
--8<-- "snippets/show-num-records.cpp"
```


## Assignment 4


Create a C++ program named `bmi-calculator.cpp` that prompts for weight in pounds and height in inches.
It does not only calculates and displays the body mass index (BMI), but will also prompt the BMI classification.

FYI, `BMI = (Weight in Pounds / (Height in inches x Height in inches)) x 703`

The BMI classification is as follows.

|      BMI      | BMI Classification |
| :-----------: | :----------------: |
| 18.5 or less  |    Underweight     |
| 18.5 to 24.99 |   Normal Weight    |
|  25 to 29.99  |     Overweight     |
|  30 to 34.99  | Obesity (Class 1)  |
|  35 to 39.99  | Obesity (Class 2)  |
| 40 or greater |   Morbid Obesity   |

??? info "Sample Solution"

    ```cpp title="bmi-calculator.cpp" linenums="1"
    --8<-- "assignments/bmi-calculator.cpp"
    ```
