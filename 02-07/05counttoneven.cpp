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
        int i = 0;
        cout << "Counting from 0 to n\n";
        while (i != (n+1)) {
            cout << i << "\n";
            i += 2; //Update counter
        }
    }
    return 0;
}