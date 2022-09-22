# Basics of C++

## File extension

We use `.cpp` for C++ source codes.

## Execution

C++ is a compiled language, meaning that it will be translated into machine codes that can be understood directly by the system.
Hence, in order to execute a C++ program, we need to compile then run the executable.

Let's use the `Hello, World!` program as an example.

```cpp title="hello-world.cpp" linenums="1"
--8<-- "snippets/hello-world.cpp"
```

Simply we run

    g++ hello-world.cpp

An executable with the default name `a` will be created.

On Windows, we should see `a.exe`. On macOS/Linux, we should see `a.out`.

We can also use the `-o` flag to specify the name of the executable.

    g++ hello-world.cpp -o hello-world

In this case, the named executable will generate.

After all, we can run the executable and expect `Hello, World!` to be printed in the terminal.

## Semicolons

Every C++ statement ends with a semicolon (`;`).

## Variables

Variables are containers for values.

C++ is static typed, meaning that to create a variable, we have to specify the type so that we can assign value accordingly.

In C++, there are some basic types of variables:

- `int`
- `float`
- `double`
- `char`
- `string`
- `bool`

```cpp title="create-variables.cpp" linenums="1"
--8<-- "snippets/create-variables.cpp"
```

When we create variables, we can use assignment operator `=` to initialize a value.

```cpp title="create-variables-with-values.cpp" linenums="1"
--8<-- "snippets/create-variables-with-values.cpp"
```

We can also create constants that cannot change their values.

```cpp title="modify-constant.cpp" linenums="1"
--8<-- "snippets/modify-constant.cpp"
```

Try to compile the codes above, an error shall raise :cry: :

```terminal
.\modify-constant.cpp: In function 'int main()':
.\modify-constant.cpp:8:11: error: assignment of read-only variable 'value'
    8 |     value = 2;
      |     ~~~~~~^~~
```

## Output

To display values in the terminal, we use `cout` together with `<<` operator.

To display a newline character, use `endl`.

```cpp title="print-variables.cpp" linenums="1"
--8<-- "snippets/print-variables.cpp"
```

## User Input

While `cout` is used to output, we use `cin`, together with `>>` operator, to capture user input.

```cpp title="input-x.cpp" linenums="1"
--8<-- "snippets/input-x.cpp"
```

## Comments

In C++ we use `//` to comment out a single line, everything after `//` is ignored by the compiler.

We can use it in end of line

```cpp linenums="1"
int x = 1; // x is 1
```

or from the beginning

```cpp linenums="1"
// y is 2
int y = 2;
```

In case we need to provide a long piece of text as comment, use a pair of `/*` and `*/`.
Any text in-between will be ignored by the complier.

```cpp linenums="1"
/* z is supposed to be 3
but ends up being 4 */
int z = 4;
```

## Assignment 1

Write a C++ program named `greeting.cpp` to ask user for his/her `name` and display "Hello, `name`".

The workflow the program is as follows:

1. The command line would prompt "What is your name? "
2. Suppose we enter "Jack".
3. The command line displays "Hello, Jack"

??? info "Sample Solution"

    ```cpp title="greeting.cpp" linenums="1"
    --8<-- "assignments/greeting.cpp"
    ```

## Operators

### Arithmetic Operators

- `+` for addition
- `-` for subtraction
- `*` for multiplication
- `/` for division
- `%` for modulus
- `++` for increment by 1
- `--` for decrement by 1

### Assignment Operators

We use `=` to assign value to a variable, just like we mention earlier.

We can also chain `=` with the arithmetic operators to simply the code

For example,

```cpp
int a = 1;
a = a + 2;
```

is equivalent to

```cpp
int a = 1;
a += 2;
```

### Comparison Operators

Comparison operators are used to compare two values. They alway return a boolean (`true`/`false`).

```cpp title="compare.cpp" linenums="1"
--8<-- "snippets/compare.cpp"
```

### Logical Operators

Logical operators are used to determine the logic between variables or values

- `&&` for logical and
- `||` for logical or
- `!` for logical not

```cpp title="logical.cpp" linenums="1"
--8<-- "snippets/logical.cpp"
```

## Assignment 2

Write a C++ program named `circle.cpp` that prompts for hte diameter (cm) of a circle and computes and displays the circle's area and circumference.

We can assume `π` equals 3.14159.

??? info "Sample Solution"

    ```cpp title="circle.cpp" linenums="1"
    --8<-- "assignments/circle.cpp"
    ```
