// This program stores the address of a variable in a pointer
#include<iostream>
using namespace std;

int main(){
    int num =50;         //int variable
    int *ptr=nullptr;   //pointer variable can point to int , now initialized to nullptr

    ptr = &num;        //store address of num in ptr

    cout<<"Value of num: "<<num<<endl;
    cout<<"Address of num: "<<&num<<endl;
    cout<<"Value stored in ptr (Address of num): "<<ptr<<endl;
    return 0;
}
