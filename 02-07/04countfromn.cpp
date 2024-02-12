//Program to count to n
#include <iostream>

using namespace std;

int main () {
    int n = 0;
    cout << "Enter non-negative integer to count from\n";
    cin >> n;
    if (n < 0) {
        cout << "Out of range!\n";
    }
    else {
        cout << "Counting from n to 0\n";
        while (n >= 0) {
            cout << n << "\n";
            n--;
        }
    }
    return 0;
}