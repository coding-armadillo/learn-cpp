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
