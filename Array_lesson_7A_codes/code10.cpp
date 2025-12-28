#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE]={1,2,3,4,5};

    // Output loop
    cout << "The even numbers you entered displayed in reverse order: ";

    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] <<endl;
    }
   
    return 0;
}


