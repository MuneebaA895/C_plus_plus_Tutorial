#include <iostream>
using namespace std;
// Enumerated data type declared befor main when using in multiple functions
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
// Function to display day name using switch
void displayDayName(Day d)
{
    switch (d)
    {
        case MONDAY:    cout << "Monday";    break;
        case TUESDAY:   cout << "Tuesday";   break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY:  cout << "Thursday";  break;
        case FRIDAY:    cout << "Friday";
    }
}
int main()
{
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS] = {1525.0, 1896.5, 1975.63, 1678.33, 1498.52};

    for (int d = MONDAY; d <= FRIDAY; d++)
    {
        displayDayName(static_cast<Day>(d));
        cout << ": " << sales[d] << endl;
    }
    return 0;
}
