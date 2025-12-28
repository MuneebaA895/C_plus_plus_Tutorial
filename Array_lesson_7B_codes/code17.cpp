#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30};

    nums.pop_back(); // removes 30

    cout << "After pop_back, vector elements: ";
    for(int i : nums)
        cout << i << " ";
    cout << endl;

    return 0;
}
