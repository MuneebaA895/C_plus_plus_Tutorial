#include<iostream>
#include<vector> // Include the vector header for using vector 
using namespace std;

int main(){
    //Declare a vector numbers to store integers
    //Because the vector expands in size as you add values to it,there is no need to declare a size.
    vector<int>numbers;

    //You can define a starting size, if you prefer.
    //Although the vector has 3 elements, its size will expand if you add more than 3 
    //values to it.
    vector<float>Mynums(3); // Creates a vector of floats with 3 elements

    // Declaring and initializing a vector
    vector<int>values={10,20,30,40,50};

    return 0;
}
