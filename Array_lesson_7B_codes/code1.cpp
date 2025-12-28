#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; // Size of the arrays
    // Two parallel arrays: marks and names
    int marks[SIZE];
    string names[SIZE];

    // Taking input from the user
    // Each array contains different information 
    //(such as name and marks) for the same student at the same index.
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter student name: ";
        cin >> names[i];
        cout << "Enter marks: ";
        cin >> marks[i];
    }
    // Output
    cout << "\nStudent Results:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << names[i] << " scored " << marks[i] << " marks." << endl;
    }
    return 0;
}
