#include <iostream>
using namespace std;
struct Student
{
    int marks;
};
// Function using pass by reference to const
void addBonus(const Student &s)
{
    s.marks += 10;  // This will cause a compilation error
}
int main()
{
    Student st;
    st.marks = 50;
    cout << "Before function call: " << st.marks << endl;

    addBonus(st);   // pass by reference to const
    cout << "After function call: " << st.marks << endl;

    return 0;
}