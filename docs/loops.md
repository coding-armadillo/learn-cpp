# Loops in C++

Loops are indented to repeat a block of codes as long as a condition is met.
There are different forms of loops in C++.

## `while` statement

The `while` loop repeats a block of code as long as a specified condition is `true`.
The syntax is as follows.

```cpp
while (condition){
    // code block to repeat
}
```

For example,

```cpp title="print-till-ten-with-while.cpp" linenums="1"
--8<-- "snippets/print-till-ten-with-while.cpp"
```

## `do-while` statement

The `do-while` loop is a variant of the `while` loop. This loop will at least execute the code block once.
Then it will repeat the loop as long as the condition is `true`.
The syntax is as follows.

```cpp
do {
    // code block to repeat
}
while (condition);
```

For example,

```cpp title="print-num.cpp" linenums="1"
--8<-- "snippets/print-num.cpp"
```

Compile and execute the program above and see how the program responses given different input.

## `for` statement

If we know exactly how many times you want to repeat a block of code, use the `for` loop is a good option.
The syntax is as follows.

```cpp
for (statement1; statement2; statement3) {
  // code block to repeat
}
```

- `statement1` is executed (one time) before the execution of the code block.
- `statement2` defines the condition for executing the code block.
- `statement3` is executed (every time) after the code block has been executed.

For example,

```cpp title="print-till-ten-with-for.cpp" linenums="1"
--8<-- "snippets/print-till-ten-with-for.cpp"
```

## `break` and `continue`

- `break` can be used to have an early exit and jump out of a loop.
- `continue` only breaks the current iteration and continues with next iteration in the loop.

For example,

```cpp title="test-flow.cpp" linenums="1"
--8<-- "snippets/test-flow.cpp"
```

## Assignment 6

Create a C++ program named `square.cpp` that prompts for length of a square. The program will then display a square of the given length in the terminal.

We can use any character to represent the side of a square. A sample run would look like the following.

```terminal
g++ square.cpp -o square
./square
Enter length: 6
******
*    *
*    *
*    *
*    *
******
```

??? info "Sample Solution"

    ```cpp title="square.cpp" linenums="1"
    --8<-- "assignments/square.cpp"
    ```


## Assignment 7

Create a C++ program named `odd-or-even.cpp` that would keep prompting for a number and tell if that number is odd or even. The program exists if the user enters a negative number.

A sample run looks like the following.

```terminal
g++ odd-or-even.cpp -o odd-or-even
./odd-or-even
Enter a number: 3
Odd number
Enter a number: 2
Even number
Enter a number: 1
Odd number
Enter a number: 0
Even number
Enter a number: -1
See you later!
```

??? info "Sample Solution"

    ```cpp title="odd-or-even.cpp" linenums="1"
    --8<-- "assignments/odd-or-even.cpp"
    ```
