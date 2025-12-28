#include<iostream>
#include<string>
#include<vector> // include the vector library
using namespace std;

int main(){

// Syntax #1: vector<datatype> vector_name;         
vector<int> myVector;  // declaring an empty integer vector named myVector

// Sytax#2: vector<datatype> vector_name(size);   
vector<int> numbers(5); //Vector of size 5 with default values (0 for int)

// Syntax#3: vector<datatype> vector_name(size, initial_value); 
vector<int> numbers(5, 10);  // numbers = {10, 10, 10, 10, 10}

// Syntax#4: vector<datatype> vector_name={value1, value2, value3};
vector<string> names={"Alice", "Bob", "Charlie"};
}

