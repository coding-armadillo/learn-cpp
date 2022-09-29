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

## `switch` statement

In C++ we can use the `switch` statement to select one of many code blocks to be executed.
The syntax is as follows.

```cpp
switch(expression) {
    case value1:
        // code block 1
        break;
    case value2:
        // code block 2
        break;
    case value3:
        // code block 3
    default:
        // code block default
}
```

- The `expression` is evaluated once.
- The value of `expression` is then compared with values in each of `case`. When there's a match, the according code bock will execute.
- The `break` allows us to break out of `switch` block and to stop further `case` testing. Usually, if there's a match, we can `break` afterwards. But there are exceptions.
- The `default` specifies what to do if there's no match.

Here's a regular use case of `switch`.

```cpp title="month-num-to-name.cpp" linenums="1"
--8<-- "snippets/month-num-to-name.cpp"
```

Here's a special usage of not haveing to `break`

```cpp title="month-num-to-season.cpp" linenums="1"
--8<-- "snippets/month-num-to-season.cpp"
```

## Assignment 5

Create a C++ program named `grades.cpp` that prompts for a grade in percentage and translates it to a letter grade.

By the way the letter grade assignment is as follow.

|   Percentage  | Letter Grade |
| :-----------: | :----------: |
|    90-100     |       A      |
|    80-89      |       B      |
|    70-79      |       C      |
|    60-69      |       D      |
|     < 60      |       F      |

??? info "Sample Solution"

    ```cpp title="grades.cpp" linenums="1"
    --8<-- "assignments/grades.cpp"
    ```
