// This program uses a pointer to display the contents
// of an integer array in forward order.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    int* ptr = numbers;   // Pointer points to first element

    cout << "The numbers are:\n";
    cout << *ptr << " "; // Display first element

    while (ptr < &numbers[SIZE - 1])
    {
        ptr++;            // Move to next element
        cout << *ptr << " ";
    }
    return 0;
}
