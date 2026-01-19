#include <iostream>
using namespace std;

// Enumerated data type
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main()
{
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];

    // Assigning values using enum constants as array indices
    sales[MONDAY]    = 1525.0;    // sales[0]
    sales[TUESDAY]   = 1896.5;    // sales[1]
    sales[WEDNESDAY] = 1975.63;   // sales[2]
    sales[THURSDAY]  = 1678.33;   // sales[3]
    sales[FRIDAY]    = 1498.52;   // sales[4]

    // Taking input using enum values in a loop
    for (int index = MONDAY; index <= FRIDAY; index++)
    {
        cout << "Enter the sales for day " << index << ": ";
        cin >> sales[index];
    }
    return 0;
}
