# C++ Arrays

## Basics

Arrays are commonly used to store multiple values. It's one of the basic data structures. We can use it to model a list/array/collection of items. Say, an array of cellphone numbers, an array of first names, etc.

To declare an array in C++, we need to specify 3 things, using the square bracket notation.

- Data Type
- Size
- Name of the array

For example,

```cpp
float scores[5];
```

To initialize values in the array during declaration, we can use the curly bracket notation.

```cpp
float scores[5] = {90.5, 88, 75.5, 89, 95.5}
```

Or simply omitting the size, the compiler is smart enough to count the number of values to be inserted.

```cpp
float scores[] = {90.5, 88, 75.5, 89, 95.5}
```

We can access each of the values in an array by its index, using the square bracket notation. C++ is zero-indexed, meaning the first value in the array has an index of 0.

For example, to retrieve the **second** scores from the `scores` array, we can simply

```cpp
cout << scores[1] << endl;
```

If the **fourth** score should be `98` instead of `89`, we can modify the value by index as well

```cpp
scores[3] = 98;
```

## Iteration

Since there are multiple values in an array, and each of value can be controlled by its index, we can easily loop through an array with a loop.

With a `for` loop,

```cpp title="loop-through-array-1.cpp" linenums="1"
--8<-- "snippets/loop-through-array-1.cpp"
```

Or with a `while` loop,

```cpp title="loop-through-array-2.cpp" linenums="1"
--8<-- "snippets/loop-through-array-2.cpp"
```

Both of the above looping examples are not elegant enough since we hardcoded the number of values in an array, which is not necessary.

`sizeof()` would return the size in bytes. When we divide the size in bytes of an array by the size of data type, there comes the number of values.

```cpp title="loop-through-array-3.cpp" linenums="1"
--8<-- "snippets/loop-through-array-3.cpp"
```



Modern C++ also support `foreach` like loop to iterate all the values,

```cpp title="loop-through-array-4.cpp" linenums="1"
--8<-- "snippets/loop-through-array-4.cpp"
```

## Assignment 12

Create a C++ program named `score-keeper.cpp` that would prompt the user for the number of scores it's going to keep. Then it asks the user to enter a numeric value score for that given number of times. Finally it displays the average of of the scores.

A sample run looks like the following.

```terminal
g++ score-keeper.cpp -o score-keeper
./score-keeper
Enter number of scores: 3
Enter score: 100
Enter score: 99
Enter score: 60
Average score is 86.3333
```

??? info "Sample Solution"

    ```cpp title="score-keeper.cpp" linenums="1"
    --8<-- "assignments/score-keeper.cpp"
    ```
