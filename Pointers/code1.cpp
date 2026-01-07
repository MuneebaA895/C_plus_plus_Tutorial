// This program demonstrates how to:
// 1. Find the memory address of a variable using the & operator
// 2. Determine the size of a variable using the sizeof operator
#include <iostream>
using namespace std;

int main()
{
    int x = 25;   // Integer variable

    cout << "Address of x  : " << &x << endl;
    cout << "Size of x     : " << sizeof(x) << " bytes" << endl;
    cout << "Value of x    : " << x << endl;

    return 0;
}

