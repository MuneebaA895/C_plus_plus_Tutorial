#include <iostream>
using namespace std;
int main() {

    const int SIZE = 5;
    int numbers[SIZE] = {12, 45, 7, 89, 23};

    int highest = numbers[0];   // Assume first element is highest

    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
    }
    cout << "Highest value: " << highest << endl;
    return 0;
}
