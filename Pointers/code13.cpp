#include <iostream>
using namespace std;

// Function to double array values
void doubleValues(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // Multiply original value by 2
    }
}

int main() {
    const int SIZE = 3;
    int numbers[SIZE] = {1,2,3};  // Initialize array

    doubleValues(numbers, SIZE);     // Double each value

    cout << "Values after doubling: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";   // Display updated array
    }
    cout << endl;
    return 0;
}
