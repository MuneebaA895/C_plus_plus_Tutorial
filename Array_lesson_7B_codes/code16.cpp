#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(15);

    // Size of the vector
    cout << "Size of vector: " << nums.size() << endl;
    
    // Accessing elements
    cout << "Vector elements: "<<endl;
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << endl;
    }
    return 0;
}


