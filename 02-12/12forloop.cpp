//Program to count to n
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
        for (int i = 0; i <= n; i++) {
            cout << i << "\n";
        }
    }
    return 0;
}