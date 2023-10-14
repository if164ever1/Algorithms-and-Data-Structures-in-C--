## Understanding Big O Notation, Time Complexity, and Space Complexity

In computer science, **Big O notation** is used to describe the efficiency of algorithms. It helps us understand how the time or space complexity of an algorithm scales with the size of the input.

### Time Complexity

- **O(1) - Constant Time:** Algorithms with constant time complexity do not depend on the size of the input. Example: Accessing an element in an array using its index.

    ```cpp
    int constantTimeAccess(int arr[], int index) {
        return arr[index];
    }
    ```

- **O(n) - Linear Time:** Algorithms with linear time complexity have a runtime proportional to the size of the input. Example: Iterating through an array.

    ```cpp
    void linearTimeOperation(int arr[], int size) {
        for(int i = 0; i < size; ++i) {
            // Do something with arr[i]
        }
    }
    ```

- **O(n^2) - Quadratic Time:** Algorithms with quadratic time complexity have a runtime proportional to the square of the input size. Example: Nested loops.

    ```cpp
    void quadraticTimeOperation(int arr[], int size) {
        for(int i = 0; i < size; ++i) {
            for(int j = 0; j < size; ++j) {
                // Do something with arr[i] and arr[j]
            }
        }
    }
    ```

### Space Complexity

- **O(1) - Constant Space:** Algorithms with constant space complexity use a fixed, constant amount of memory. Example: Performing operations on variables.

    ```cpp
    int constantSpaceOperation(int a, int b) {
        int result = a + b;
        return result;
    }
    ```

- **O(n) - Linear Space:** Algorithms with linear space complexity use space proportional to the input size. Example: Storing elements of an array.

    ```cpp
    int* createArray(int size) {
        int* arr = new int[size];
        return arr;
    }
    ```

- **O(n^2) - Quadratic Space:** Algorithms with quadratic space complexity use space proportional to the square of the input size. Example: Creating a 2D array.

    ```cpp
    int** create2DArray(int size) {
        int** arr = new int*[size];
        for(int i = 0; i < size; ++i) {
            arr[i] = new int[size];
        }
        return arr;
    }
    ```

Understanding these concepts is crucial for writing efficient algorithms and optimizing your code. Always analyze the time and space complexity of your algorithms to ensure they perform well, especially with large inputs.
