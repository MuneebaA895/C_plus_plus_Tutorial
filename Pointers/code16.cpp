#include <iostream>
using namespace std;
int main()
{
    int n;
    double *arr;   // Pointer for dynamic array
    // Ask user for array size
    cout << "Enter number of values: ";
    cin >> n;
    // Dynamically allocate array
    arr = new double[n];
    // Input values
    for (int i = 0; i < n; i++)
    {
        cout << "Value " << i + 1 << ": ";
        cin >> arr[i];
    }
    // Calculate total
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    // Display result
    cout << "Total = " << total << endl;
    // Free memory
    delete[] arr;
    arr = nullptr;
  return 0;
}
