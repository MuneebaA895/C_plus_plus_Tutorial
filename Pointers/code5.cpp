#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;  // Three int variables

    int *ptrX = &x;  // Pointer to x
    int *ptrY = &y;  // Pointer to y
    int *ptrZ = &z;  // Pointer to z

    cout << "Initial values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    *ptrX += 100;  // Add 100 to x
    *ptrY += 100;  // Add 100 to y
    *ptrZ += 100;  // Add 100 to z

    cout << "Updated values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    return 0;
}
