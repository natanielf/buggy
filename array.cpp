#include <iostream>

using namespace std;

// TODO: Implement the printArray fuction
void printArray(int* arr, int size, bool reverse) {
    // If reverse is true, print the elements in reverse order
    // Otherwise, print the elements normally
}

int main() {
    // Create an integer array of size 5
    int nums[5];

    // Populate each element of the array with its index * 2
    for (int i = 0; i < 5; ++i) {
        nums[i] = i * 2;
    }

    // Call the printArray function on the array
    printArray(nums, 5, false);
    printArray(nums, 5, true);

    return 0;
}
