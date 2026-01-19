#include <iostream>
using namespace std;
struct Student
{
    int marks;
};
// Function using pass by value
void addBonus(Student s)
{
    s.marks += 10;   // modifies a copy of the structure
}
int main()
{
    Student st;
    st.marks = 50;
    cout << "Before function call: " << st.marks << endl;

    addBonus(st);   // pass by value
    cout << "After function call: " << st.marks << endl;

    return 0;
}
