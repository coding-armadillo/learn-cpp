# C++ Pointers

## Basics

When a variable is created, a memory address is assigned to that variable. And When we assign some value to the variable, the value is stored in that memory address.

We can use `&` operator to get the memory address of a variable.

```cpp title="show-mem-addr.cpp" linenums="1"
--8<-- "snippets/show-mem-addr.cpp"
```

A variable that stores the memory address is a pointer. Be aware that since a pointer points to the memory address of a variable. If we change the value of pointer, the value of original variable would also change.

```cpp title="create-ptr.cpp" linenums="1"
--8<-- "snippets/create-ptr.cpp"
```

## Pointer of Array

When using with pointer with an array, we can easily change the pointer's location by adding index.

```cpp title="array-ptr.cpp" linenums="1"
--8<-- "snippets/array-ptr.cpp"
```

## Assignment 15

Write a C++ program named `double-down.cpp` to find the max of an integer data set and double that maximum. The program will ask the user to input the number of data values in the set and each value. Then the program displays the max value. Later, double the max and display the whole data set.

A sample run looks like the following.

```terminal
g++ double-down.cpp -o double-down
./double-down
Enter number of values: 5
Enter values in array:
1
2
5
4
3
Max is 5
After doubling down:
1 2 10 4 3
```

??? info "Sample Solution"

    ```cpp title="double-down.cpp" linenums="1"
    --8<-- "assignments/double-down.cpp"
    ```
