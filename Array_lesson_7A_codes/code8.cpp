#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout<<"Displaying First 5 Even Numbers Using Arrays:"<<endl;
    // Input loop


    for (int i = 0; i < SIZE; i++) {
        cout << "Enter even number for index " << i << ": ";
        cin >> numbers[i];
    }


    
    // Output loop
    cout << "The even numbers you entered are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] <<endl;
    }
    return 0;
}
