#include<iostream>
#include<string>
using namespace std;

int main(){
  
   const int size = 3;
   string arr[size];

   // Enter country names
   cout << "Enter first country name: ";
   getline(cin, arr[0]);

   cout << "Enter second country name: ";
   getline(cin, arr[1]);

   cout << "Enter third country name: ";
   getline(cin, arr[2]);

   // Display the 3rd country name
   cout << "The second country name is: " << arr[1] << endl;

   return 0;
}
