// 2D Array Program: Monthly Electricity Consumption of Classrooms
#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array for 3 classrooms and 3 months
    double electricity[3][3];

    // Taking input from the user
    for (int classroom = 0; classroom < 3; classroom++) {
        for (int month = 0; month < 3; month++) {
            cout << "Enter electricity consumption for Classroom: "<<classroom+1<<month+1<<":"; 
            cin >> electricity[classroom][month];
        }
    }
    cout << "\nElectricity Consumption Details:\n";
    // Displaying the entered values using nested loops
    for (int classroom = 0; classroom < 3; classroom++) {
        for (int month = 0; month < 3; month++) {
            cout << "Classroom " << classroom + 1<< ", Month " << month + 1<< " = ";
            cout<< electricity[classroom][month]<< " units" << endl;
        }
    }
    return 0;
}
