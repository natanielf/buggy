#include <iostream>

using namespace std;

#define SIZE 5

void print_array(int* arr, int size, bool reverse) {
    // If reverse is true, print the elements in reverse order
    // Otherwise, print the elements normally
    cout << "[";
    if (reverse) {
        for (int i = size - 1; i >= 0; --i) {
            cout << arr[i];
            if (i > 0) cout << ", ";
        }
    } else {
        for (int i = 0; i < size; ++i) {
            cout << arr[i];
            if (i < size - 1) cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    // Create an integer array
    int nums[SIZE];

    // Populate each element of the array
    for (int i = 0; i < SIZE; ++i) {
        nums[i] = i * 2;
    }

    // Print the array
    print_array(nums, SIZE, false);
    print_array(nums, SIZE, true);

    return 0;
}
