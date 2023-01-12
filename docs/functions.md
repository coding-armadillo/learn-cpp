# C++ Functions

A function is a block of code that runs when it is called. It can take data as input (known as parameters) and generate output (know as return value).

Functions are used to create reusable and modular codes.

## Declaration, Definition, and Execution

A C++ function consists of two parts:

- Declaration: the function name, parameters if any, and return type
- Definition: the body of function

To execute a function, invoke the name with `()` and provide parameters if required.

For example

```cpp title="func-say-hi.cpp" linenums="1"
--8<-- "snippets/func-say-hi.cpp"
```

We create a function called `sayHi()` which takes no parameters and returns nothing (`void`).

It's important to know that user-defined function needs to be declared before `main()`. Otherwise, an error will occur, as follow.

```cpp title="func-say-hi-error.cpp" linenums="1" hl_lines="9 14"
--8<-- "snippets/func-say-hi-error.cpp"
```

```
func-say-hi-error.cpp:9:5: error: use of undeclared identifier 'sayHi'
    sayHi();
    ^
1 error generated.
```

However, we can fix it by separating the declaration and the definition. Later we would see it's normal to use header files to declare functions and then implement those functions in separate cpp files.

```cpp title="func-say-hi-error-fix.cpp" linenums="1" hl_lines="5"
--8<-- "snippets/func-say-hi-error-fix.cpp"
```

## Parameters

Data can be passed to functions as parameters. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the pair of parentheses. We can specify as many parameters as we want, just separate them with a comma. And for each parameter, make sure we specify the data type.

For example

```cpp title="func-say-hi-by-person.cpp" linenums="1" hl_lines="5 15"
--8<-- "snippets/func-say-hi-by-person.cpp"
```

In case we have more parameters

```cpp title="func-say-hi-by-person-multiple-times.cpp" linenums="1" hl_lines="5 18"
--8<-- "snippets/func-say-hi-by-person-multiple-times.cpp"
```

We can also use a default parameter value, by specifying the value after `=`.

```cpp title="func-say-hi-by-person-multiple-times-default.cpp" linenums="1" hl_lines="5 18 22"
--8<-- "snippets/func-say-hi-by-person-multiple-times-default.cpp"
```
