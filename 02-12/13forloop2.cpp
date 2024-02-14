//Program to count from 0 to n and from n to 0 parallelly
#include <iostream>

using namespace std;

int main () {
    int n = 0;
    cout << "Enter non-negative integer:\n";
    cin >> n;
    if (n < 0) {
        cout << "Out of range!\n";
    }
    else {
        for (int i = 0, j = n; i <= n, j >= 0; ++i, --j) {
            cout << i << "\t" << j << "\n";
        }
    }
    return 0;
}