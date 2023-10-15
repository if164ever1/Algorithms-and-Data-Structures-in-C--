#include <iostream>


void reverseArray(int *arr, int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void insertElement(int arr[], int& size, int index, int element) {
    // Shift elements to make space for the new element
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element at the specified index
    arr[index] = element;
    size++; // Increase the size of the array
}


int main(){
    int arr[] = {3, 5, 9, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array
    reverseArray(&arr[0], size);

    // Print reversed array
    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Insert an element at index 2
    insertElement(arr, size, 2, 7);

    // Print array after insertion
    std::cout << "\nArray after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}