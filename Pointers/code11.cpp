#include <iostream>
using namespace std;

void change(int n) //Function Definition
{
    n += 50;   // Changes only the local copy not the original variable
}
int main()
{
    int num1 = 5;
    // Passing value (a copy of the variable num1), not address as argument
    change(num1); 
    cout << "num1 = " << num1 << endl;

    return 0;
}
