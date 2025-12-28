#include <iostream>
using namespace std;
int main() {

    const int SIZE = 5;
    int numbers[SIZE] = {12, 45, 7, 89, 23};

    int lowest = numbers[0];   // Assume first element is lowest

    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }
    cout << "Lowest value: " << lowest << endl;
    return 0;
}
