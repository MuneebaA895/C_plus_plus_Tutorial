#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Display all elements of the array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " "<<endl;
    }
    return 0;
}
