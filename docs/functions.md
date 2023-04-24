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

## Return Value

The example functions above use the `void` as return value, indicating not to expect a return value. If a function shall return a value, specify the data type in declaration and use the `return` keyword in the definition of a function.

For example

```cpp title="func-add.cpp" linenums="1" hl_lines="5 16"
--8<-- "snippets/func-add.cpp"
```

## Function Overloading

With function overloading, multiple functions can have the same name with different parameters.

For example

```cpp title="func-add-overloading.cpp" linenums="1" hl_lines="5 11 17 28 33 38"
--8<-- "snippets/func-add-overloading.cpp"
```

## Pass by Reference

Normally data passed by parameters are used as values in a function, meaning that it does not change the original value if you apply some logic within a function.

Let's rewrite the `add()` function such that the parameters increment themselves before being added.

```cpp title="func-by-value.cpp" linenums="1" hl_lines="8 9"
--8<-- "snippets/func-by-value.cpp"
```

However, when we use `&` in the parameter, the parameter would pass as reference, meaning that the logic applied in the function would modify the original value.

For example

```cpp title="func-by-reference.cpp" linenums="1" hl_lines="5 8 9"
--8<-- "snippets/func-by-reference.cpp"
```

## Array as parameter

By the way, we can also specify a parameter to be an array.

For example

```cpp title="func-add-array.cpp" linenums="1" hl_lines="5 8 9"
--8<-- "snippets/func-add-array.cpp"
```

## Recursion

![Recursion](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d9/Droste_Cacao_Alcalinise_blikje%2C_foto4.JPG/800px-Droste_Cacao_Alcalinise_blikje%2C_foto4.JPG)

Recursion is the technique of making a function call itself. (The example in overloading is actually not recursion. Why?) This technique provides a way to break complicated problems down into simple problems which are easier to solve.

For example, Fibonacci sequence

`0 1 1 2 3 5 8 13 ...`

can be defined in a recursive way, say `Fib(n)`, such that

```
Fib(0)=0
Fib(1)=1
```

For all integers n, where `n > 1`

```
Fib(n) = Fib(n-1) + Fib(n-2)
```

Let's implement it in `C++`.

```cpp title="func-fib.cpp" linenums="1" hl_lines="5 8 9"
--8<-- "snippets/func-fib.cpp"
```

## Assignment 17

[Kattis Probelm / Bus](https://open.kattis.com/problems/bus)
