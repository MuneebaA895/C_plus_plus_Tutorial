// Arrays of Structures
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
    
    // Initializing the Array of Structures with employee data
    employees[0] = {1001, "Michael", 160, 50.0, 0.0};
    employees[1] = {1002, "Pam",     150, 20.0, 0.0};
    employees[2] = {1003, "Jim",     170, 40.0, 0.0};

    // Calculating gross pay for each employee
    for(int i = 0; i < 3; i++) {
        employees[i].grossPay = employees[i].hoursWorked * employees[i].hourlyRate;
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
    return 0;
}
