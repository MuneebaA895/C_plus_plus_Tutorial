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
    Student student1;
    cout<<"Enter Student ID: ";
    cin>>student1.studentID;
    cin.ignore(); // To ignore the newline character after entering studentID
    cout<<"Enter Student Name: ";
    getline(cin, student1.name);
    cout<<"Enter Quiz 1 Score: ";
    cin>>student1.quiz1;
    cout<<"Enter Quiz 2 Score: ";
    cin>>student1.quiz2;

    double total= student1.quiz1 + student1.quiz2;
    cout<<"Student Name: "<<student1.name<<", Total Quiz Score: "<<total<<endl;
    return 0;
}

