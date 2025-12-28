#include <iostream>
using namespace std;
int main() {
    int arr[3] = {10, 20, 30};

    cout << arr[0] << endl;  // Correct
    cout << arr[1] << endl;  // Correct
    cout << arr[2] << endl;  // Correct

    cout << arr[3] << endl;  //Out of bounds (No error is shown.) 
    return 0;
}