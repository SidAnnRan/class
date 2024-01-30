#include <iostream>
using namespace std;

int main() {
    int i = 0;
    cout << "Enter a number: ";
    cin >> i;

    if (i > 0)
        cout << "Positive number\n";
    else
        cout << "Non-positive number\n";
    
    return 0;
}