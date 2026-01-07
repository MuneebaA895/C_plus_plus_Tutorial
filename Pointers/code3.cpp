// This program stores the address of a variable in a pointer
#include<iostream>
using namespace std;

int main(){
    int num =50;         //int variable
    int *ptr=nullptr;   //pointer initialized to nullptr

    ptr = &num;        //store address of num in ptr

    // Deferencing the pointer to get the value at 
    //the address it points to
    cout<<"Value that address in ptr points to : "<<*ptr<<endl;
    
    return 0;
}