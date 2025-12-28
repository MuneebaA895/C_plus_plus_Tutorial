// 2D Arrays
#include<iostream>
#include<string>
using namespace std;

int main(){
    // Declare and initialize a 2D array to store scores of 3 students in 4 subjects
    double scores[3][4]={
        {85.5, 90.0, 78.5, 88.0},
        {92.0, 81.5, 79.0, 95.5},
        {76.5, 88.5, 84.0, 91.0}
    };

    // Using nested loop to display the scores
    for(int rows=0; rows<3; rows++){
        for(int columns=0; columns<4; columns++){
            cout << "Score of student " << rows+1 << " in subject " << columns+1 << " is: ";
            cout<< scores[rows][columns] << endl;
        }
    }
    return 0;
}

