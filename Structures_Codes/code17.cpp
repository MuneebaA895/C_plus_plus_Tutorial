#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int id;
    string name;
};

// Function that returns a structure
Student createStudent()
{
    Student s;
    s.id = 101;
    s.name = "Ali";
    return s;   // return structure
}

int main()
{
    Student st;

    st = createStudent();   // receive returned structure

    cout << "Student ID: " << st.id << endl;
    cout << "Student Name: " << st.name << endl;

    return 0;
}
