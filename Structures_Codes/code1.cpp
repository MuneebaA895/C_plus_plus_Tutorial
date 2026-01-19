#include<iostream>
#include<string>
using namespace std;

// Declaring a Structure called PayRoll. PayRoll will hold employee payroll information.
struct PayRoll {
    int empID;              
    string empName;       // Member Variables 1  
    double hoursWorked;   // Member Variables 2  
    double hourlyRate;    // Member Variables 3 
    double grossPay;       // Member Variables 4 
};
int main(){
    // Creating Structure Variables
    PayRoll Manager;   // Structure Variable 1
    PayRoll Clerk;     // Structure Variable 2   
    PayRoll Analyst;   // Structure Variable 3
    
    // Assigning values to Manager
    Manager.empID = 1001;
    Manager.empName = "Michael";
    Manager.hoursWorked = 160;
    Manager.hourlyRate = 50.0;
    Manager.grossPay = Manager.hoursWorked * Manager.hourlyRate;

    // Assigning values to Clerk
    Clerk.empID = 1002;
    Clerk.empName = "Pam";
    Clerk.hoursWorked = 150;
    Clerk.hourlyRate = 20.0;
    Clerk.grossPay = Clerk.hoursWorked * Clerk.hourlyRate;

    // Assigning values to Analyst
    Analyst.empID = 1003;
    Analyst.empName = "Jim";
    Analyst.hoursWorked = 170;
    Analyst.hourlyRate = 40.0;
    Analyst.grossPay = Analyst.hoursWorked * Analyst.hourlyRate;

// Displaying the Name and Gross Pay of each employee
    cout << "Employee: " << Manager.empName << ", Gross Pay: "<<Manager.grossPay << endl;
    cout << "Employee: " << Clerk.empName << ", Gross Pay:  "<<Clerk.grossPay << endl;
    cout << "Employee: " << Analyst.empName << ", Gross Pay: " <<Analyst.grossPay << endl;
    

    return 0;
}


