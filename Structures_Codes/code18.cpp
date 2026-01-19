#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;       // Student's name
    int idNum;         // Student ID number
    int creditHours;   // Credit hours enrolled
    double gpa;        // Current GPA
};
// Function prototype
void getData(Student *s);

int main()
{
    Student freshman;
    // Get the student data
    cout << "Enter the following student data:\n";
    getData(&freshman);   // Pass the address of freshman

    // Display the data stored in freshman
    cout << "\nHere is the student data you entered:\n";
    cout << fixed << setprecision(2);  // format GPA with 2 decimals
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;
    return 0;
}

//********************************************************
// Definition of function getData. Uses a pointer to a   *
// Student structure variable. The user enters student  *
// information, which is stored in the variable.        *
//********************************************************

void getData(Student *s)
{
    cin.ignore();  // Ignore leftover newline before getline

    // Get the student name
    cout << "Student name: ";
    getline(cin, s->name);

    // Get the student ID number
    cout << "Student ID Number: ";
    cin >> s->idNum;

    // Get the credit hours enrolled
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    // Get the GPA
    cout << "Current GPA: ";
    cin >> s->gpa;
}
