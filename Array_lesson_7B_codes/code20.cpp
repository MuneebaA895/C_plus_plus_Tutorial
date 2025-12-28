#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> marks;   // vector to store student marks
    int numStudents;
    double sum = 0.0;
    // Get the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;
    // Input marks and store in vector using push_back
    for (int i = 0; i < numStudents; i++) {
        double mark;
        cout << "Enter mark for student #" << (i + 1) << ": ";
        cin >> mark;
        marks.push_back(mark);
    }
    // Calculate sum of marks
    for (int i = 0; i < marks.size(); i++) {
        sum += marks[i];
    }
    // Calculate and display average
    double average = sum / marks.size();
    cout << "\nAverage mark of the class: " << average << endl;
    return 0;
}
