#include <iostream>
using namespace std;

void change(int *n) // Function that takes a pointer to an integer
{
    *n = 50;   // Change the value at the address
}
int main()
{
    int num1 = 5;
    change(&num1);   // Pass address of num1
    cout << "num1 = " << num1 << endl;
    return 0;
}
