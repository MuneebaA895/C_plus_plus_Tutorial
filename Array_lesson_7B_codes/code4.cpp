#include <iostream>
using namespace std;
// Function prototypes
void doubleArray(int [], int);
void showValues(int [], int);
int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};
    // Double the values (multiply each value by 2) in the array
    doubleArray(set, ARRAY_SIZE);

    // Display the resulting values
    cout << "After calling doubleArray the values are:\n";
    showValues(set, ARRAY_SIZE);
    return 0;
}
// The nums parameter variable in the doubleArray and showValues functions can accept 
// the address of any integer array, and can be used to reference that array.
void doubleArray(int nums[], int size) // function definition
{
    for (int index = 0; index < size; index++)
        nums[index] *= 2; // Multiply each element by 2
}
void showValues(int nums[], int size)// function definition
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " "; // Print each element
    cout << endl;
}
