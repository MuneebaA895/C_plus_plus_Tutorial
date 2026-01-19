#include<iostream>
#include<string>
using namespace std;

// Declaring a Structure called PayRoll.
struct PayRoll {
    int empID;              
    string empName;       // Member Variables 1  
    double hoursWorked;   // Member Variables 2  
    double hourlyRate;    // Member Variables 3 
    double grossPay;       // Member Variables 4 
};
int main() {
    PayRoll employees[3];  // Declaring an Array of Structures
    // Taking input for the Array of Structures
    for(int i=0; i<3; i++){
        cout << "....Enter details for Employee..." << (i+1) << ":\n";
        cout << "Employee ID: ";
        cin >> employees[i].empID;
        cout << "Employee Name: ";
        cin >> employees[i].empName;
        cout << "Hours Worked: ";
        cin >> employees[i].hoursWorked;
        cout << "Hourly Rate: ";
        cin >> employees[i].hourlyRate;
        employees[i].grossPay = employees[i].hoursWorked * employees[i].hourlyRate;
        cout <<endl;
    }
   // Displaying the payroll information
    cout << "Employee Payroll Information:\n";
    cout << "----------------------------------------\n";
    for(int i = 0; i < 3; i++) {
        cout << "Employee ID: " << employees[i].empID << "\n";
        cout << "Employee Name: " << employees[i].empName << "\n";
        cout << "Hours Worked: " << employees[i].hoursWorked << "\n";
        cout << "Hourly Rate: $" << employees[i].hourlyRate << "\n";
        cout << "Gross Pay: $" << employees[i].grossPay << "\n";
        cout << "----------------------------------------\n";
    }

}
