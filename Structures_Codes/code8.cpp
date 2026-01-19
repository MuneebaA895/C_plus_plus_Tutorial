#include<iostream>
using namespace std;

int main(){
    enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
    //Day=3 is invalid, uncommenting the below line will cause a compilation error
    // Day weekend = 3; This will cause a compilation error

    int middleDay = WEDNESDAY;
    cout << "Integer value of WEDNESDAY is: " << middleDay << endl;
    return 0;
}
