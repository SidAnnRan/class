#include <iostream>
using namespace std;

int main() {
    int i = 0;
    cout << "Enter a number: ";
    cin >> i;

    if (i > 0)
        cout << "Positive number\n";
    else if (i == 0)
        cout << "Zero\n";
    else
        cout << "Negative number\n";
    
    return 0;
}