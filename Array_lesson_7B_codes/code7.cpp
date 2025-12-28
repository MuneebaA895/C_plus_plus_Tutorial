#include <iostream>
using namespace std;
// Function prototypes
double calculateAverage(const int scores[], int size);
int main() {
    const int NUM_STUDENTS = 5;
    int scores[NUM_STUDENTS] = {80, 90, 75, 85, 95};

    // Calculate the average score
    double average = calculateAverage(scores, NUM_STUDENTS);

    // Display the average
    cout << "Average score: " << average << endl;

    return 0;
}
// Function to calculate the average score
double calculateAverage(const int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += scores[i];
    return (sum/size);
}
