#include<iostream>
using namespace std;
int main(){
    int Myarr[6]={10,20,30,40,50,60};
    
    Myarr[2] = 100; // Modifying the third element (index 2)
    Myarr[4]=Myarr[4]*3; // Modifying the fifth element (index 4)
    Myarr[0]=Myarr[0]-5; // Modifying the first element (index 0)

    cout << "Modified array elements are:" << endl;
    for(int i=0; i<6; i++){

        cout<<Myarr[i]<<endl;
    }
}


