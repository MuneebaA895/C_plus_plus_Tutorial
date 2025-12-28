#include <iostream>
using namespace std;
int main() {
    const int NUM_SCORES = 5;
    double scores[NUM_SCORES] = {85, 90, 78, 88, 92};

    double total = 0;   
    double average;      

    // Step 1: Calculate total of array elements
    for (int count = 0; count < NUM_SCORES; count++) {
        total += scores[count];
    }

    // Step 2: Calculate average (outside the loop)
    average = total / NUM_SCORES;

    // Display result
    cout << "Average score: " << average << endl;

    return 0;
}

