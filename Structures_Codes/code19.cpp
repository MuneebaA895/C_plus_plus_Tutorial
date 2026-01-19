#include <iostream>
using namespace std;

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data d;

    d.i = 10;
    cout << "d.i: " << d.i << endl;

    d.f = 3.14;   // overwrites d.i
    cout << "d.f: " << d.f << endl;
    cout << "d.i (after overwrite): " << d.i << endl;

    d.c = 'A';    // overwrites d.f
    cout << "d.c: " << d.c << endl;
    cout << "d.f (after overwrite): " << d.f << endl;

    return 0;
}
