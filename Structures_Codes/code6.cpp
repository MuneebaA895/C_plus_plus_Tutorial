#include <iostream>
#include <string>
using namespace std;
// Inner structure
struct Address
{
    string city;
    string hostel;
    int roomNo;
};
// Outer structure
struct Student
{
    int rollNo;
    string name;
    Address location;// Nested structure
};

int main()
{
    Student s1;   // Creating a Student variable

    // Assigning values
    s1.rollNo = 2025;
    s1.name = "Ali Khan";
    s1.location.city = "Islamabad";
    s1.location.hostel = "Boys Hostel A";
    s1.location.roomNo = 12;

    // Displaying values
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "City: " << s1.location.city << endl;
    cout << "Hostel: " << s1.location.hostel << endl;
    cout << "Room No: " << s1.location.roomNo << endl;

    return 0;
}
