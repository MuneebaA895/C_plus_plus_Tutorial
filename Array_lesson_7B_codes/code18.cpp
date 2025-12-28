#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 10, 15};

    nums.clear(); // removes all elements

    cout << "After clear, is vector empty? " << (nums.empty() ? "Yes" : "No") << endl;

    return 0;
}
