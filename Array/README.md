# Arrays in C++

Arrays are fundamental data structures that store elements of the same data type in contiguous memory locations. They are widely used for various algorithms and applications in programming. In this section, you will learn the basics of arrays in C++ and practice common array operations.

## Basic Concepts of Arrays in C++

In C++, an array is declared using the following syntax:
```cpp
dataType arrayName[arraySize];

## How Arrays are Stored in Computer Memory
Arrays in computer memory are stored in **contiguous** (adjacent and sequential) memory locations. Each element of an array occupies a specific memory address, and these addresses are sequential. This means that all elements of an array are stored one after the other in memory. The position of each element in the array is determined by its index.

### Memory Addresses and Indices
When you declare an array in your program, the operating system allocates a block of memory to hold all the elements of the array. Each element in the array occupies a specific memory address, and these addresses are sequential.

For example, consider an array of integers in C++:
```cpp
    int numbers[5];
    ```