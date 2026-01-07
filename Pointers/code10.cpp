// This program uses a pointer to display the contents
// of an integer array in reverse order.
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    int* ptr = &numbers[SIZE - 1];  // Pointer points to last element

    cout << "The numbers backward are:\n";
    cout << *ptr << " ";            // Display last element

    while (ptr > numbers)
    {
        ptr--;                      // Move to previous element
        cout << *ptr << " ";
    }
    return 0;
}
