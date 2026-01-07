// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int* numPtr = nullptr;   // Pointer
    int count;              // Counter variable
    // Make numPtr point to the first element of the array
    numPtr = set;
    // Display the array contents using the pointer
    cout << "The numbers in set are:\n";
    for (count = 0; count < SIZE; count++)
    {
        cout << *numPtr << " ";
        numPtr++;// (Increment the pointer) Move pointer to the next element
    }
    // Display the array contents in reverse order
    cout << "\nThe numbers in set backward are:\n";
    for (count = 0; count < SIZE; count++)
    {
        numPtr--;// (Decrement the pointer) Move pointer to the previous element
        cout << *numPtr << " ";
    }
    return 0;
}
