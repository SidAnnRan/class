#include <iostream>

using namespace std;

void printDigitName(int x);

void printDigitName(int x)
{
    if (x == 1)
        cout << "One";
    else if (x == 2)
        cout << "Two";
    else if (x == 3)
        cout << "Three";
    else
        cout << "Unknown";
}

int main()
{
    printDigitName(2);
    cout << '\n';

    return 0;
}