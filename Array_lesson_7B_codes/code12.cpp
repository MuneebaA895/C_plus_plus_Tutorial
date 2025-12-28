#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3;   // Number of students
    const int NUM_SCORES = 5;     // Number of test scores
    double total;                // Accumulator (running total)
    double average;              // To store each student's average

    double scores[NUM_STUDENTS][NUM_SCORES] = {
        {88, 97, 79, 86, 94},
        {86, 91, 78, 79, 84},
        {82, 73, 77, 82, 89}
    };

    // Calculate and display each student's average score
    for (int row = 0; row < NUM_STUDENTS; row++) {
        total = 0;  // Running sum reset to 0 for each student

        for (int col = 0; col < NUM_SCORES; col++) {
            total += scores[row][col];
        }
        average = total / NUM_SCORES;
        cout << "Score average for student "<< (row + 1) << " is "<< average << endl;
    }
    return 0;
}
