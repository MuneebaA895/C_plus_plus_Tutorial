#include<iostream>
using namespace std;

int main(){

    enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};
    
    // Creating a variable of enum type Day
    Day workDay=WEDNESDAY;

    // All enum values are represented by integers starting from 0
    cout<<"Integer value of WEDNESDAY is: "<<workDay<<endl;
    return 0;
}

