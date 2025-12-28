#include<iostream>
using namespace std;

int main(){
  
   const int size =3;
   string arr[size];

   // Enter fruits names 
   cout<<"Enter first fruit:";
   cin>>arr[0];
   cout<<"Enter second fruit:";
   cin>>arr[1];
   cout<<"Enter third fruit:";
   cin>>arr[2];

   // Display the 3rd fruit
    cout<<"The third fruit is: "<<arr[2]<<endl;
}
    