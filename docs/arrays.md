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

Create a C++ program named `score-keeper.cpp` that would prompt the user for the number of scores it's going to keep. Then it asks the user to enter a numeric value score for that given number of times. Finally it displays the average of the scores.

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

## Multi-Dimensional Arrays

![xyz](https://placenote.com/blog/content/images/2020/03/frame.png){width="50%" loading=lazy}

A multi-dimensional array is a set of embedded arrays. For example, a 2D array is an array of arrays. A 3D array is an array of 2D array.

To declare a 2D array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have.

In case we have higher dimensional arrays, we simply keep on adding square brackets to generate more dimensions.

??? info "When to use multi-dimensional array?"

    It's natural to model concepts that are multi-dimensional, such as matrix, spreadsheets, and pixels.

    And when we apply algorithm such as dynamic programming, knowing to to use an array becomes a must.

For example, we have to create an array to keep the scores for all 3 students in a class, where all students study the same 4 subjects. We can use a 2D (3x4 or 4x3) array to store the information.

```cpp
float scores[3][4];
```

Similar with ordinary arrays, we can initialize the values upon declaration. But since we have more dimensions, the curly bracket notation becomes embedded as well.

```cpp
float scores[3][4] = {
    {90, 85, 64, 72},
    {100, 100, 100, 50},
    {80, 90, 99, 95},
};
```

Accessing and changing values in a multi-dimensional array is conceptually same with the ordinary one. But instead of using one index, we have to use multiple index to refer to its location in different dimensions.

```cpp
scores[0][1]=80;
cout << scores[0][1] << endl;
cout << scores[2][3] << endl;
```

And to loop through the entire array, we normally need to use embedded loops.

```cpp title="multi-dimensional-arrays.cpp" linenums="1"
--8<-- "snippets/multi-dimensional-arrays.cpp"
```

## Assignment 13

Create a C++ program named `multi-score-keeper.cpp` that would prompt the number of players to begin with. Then it prompts the user for the number of scores it's going to keep for each player. Then it asks the user to enter numericals for all players' scores. Finally it displays the average of the scores for each player.

A sample run looks like the following.

```terminal
g++ multi-score-keeper.cpp -o multi-score-keeper
./multi-score-keeper
Enter number of players: 2
Enter number of scores: 2

Play 1:
Enter score 1: 100
Enter score 2: 90

Play 2:
Enter score 1: 80
Enter score 2: 77

Average score of Player 1 is 95
Average score of Player 2 is 78.5
```

??? info "Sample Solution"

    ```cpp title="multi-score-keeper.cpp" linenums="1"
    --8<-- "assignments/multi-score-keeper.cpp"
    ```

## Strings

A `string` variable in C++ is a collection of characters. We can use the square bracket notation to access and modify the value in a string.

For example,

```cpp title="strings-demo.cpp" linenums="1"
--8<-- "snippets/strings-demo.cpp"
```

For convenience, we can use length() or size() to get the length of a string.

```cpp
cout << car.length() << endl;
cout << car.size() << endl;
```

The `+` operator when used with strings, it operates as concatenation.

```cpp title="strings-concat.cpp" linenums="1"
--8<-- "snippets/strings-concat.cpp"
```

In C++ a `string` variable can store whitespaces. But `cin` considers whitespaces as a terminating character. If we want the freeform text from terminal, use `getline` instead.

```cpp title="strings-getline.cpp" linenums="1"
--8<-- "snippets/strings-getline.cpp"
```

There are other [functions](https://cplusplus.com/reference/string/string/) that may be useful for `string`.

For example,

```cpp title="strings-functions.cpp" linenums="1"
--8<-- "snippets/strings-functions.cpp"
```
