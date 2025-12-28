#include <iostream>
using namespace std;

const int COLS = 4;
const int ROWS=3;
// Function Definition to display a 2D array
void showArray(const int arr[][COLS], int rows) {
    for (int rowi = 0; rowi < rows; rowi++) {
        for (int columnj = 0; columnj < COLS; columnj++) {
            cout << arr[rowi][columnj] << " ";
        }
        cout << endl;
    }
}
int main() {
    int table1[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "Table 1:\n";
    showArray(table1, ROWS);
    return 0;
}
