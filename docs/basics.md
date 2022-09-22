# Basics of C++

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
