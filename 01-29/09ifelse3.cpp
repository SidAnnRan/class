#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 0;
    cout << "Enter 2 numbers:\n";
    cin >> i;

    if (i > 0 && j > 0)
        cout << "Positive numbers\n";
    else if (i < 0 && j < 0)
        cout << "Negative numbers\n";
    else
        cout << "Mixed\n";
    
    return 0;
}