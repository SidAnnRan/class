//Program to count to n in 3 columns
#include <iostream>

using namespace std;

int main () {
    int n = 0;
    cout << "Enter non-negative integer to count upto\n";
    cin >> n;
    if (n < 0) {
        cout << "Out of range!\n";
    }
    else {
        int i = 0, col = 0;
        cout << "Counting from 0 to n\n";
        while (i <= n) {
            cout << i << "\t";
            col++; i++;
            if(col == 3) {
                cout << "\n";
                col = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}