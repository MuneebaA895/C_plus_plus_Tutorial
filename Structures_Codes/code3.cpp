#include<iostream>
#include<string>
using namespace std;

struct Student{
int studentID;
string name;
double quiz1;
double quiz2;
};
int main(){
    // Initializing structure members using an initialization list
    Student student1={1001, "Ayesha", 30, 50};
    double total= student1.quiz1 + student1.quiz2;
    cout<<"Student Name: "<<student1.name<<", Total Quiz Score: "<<total<<endl;
    return 0;
}