#include <iostream>
using namespace std;

int main() {
    int numbers[3];
    // Loop runs more times than array size i.e buffer overflow
    // loops runs from 0 to 4 (5 iterations) 
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];   // Buffer overflow
    }
    cout << "Values stored in array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}


