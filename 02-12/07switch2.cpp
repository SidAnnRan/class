#include <iostream>

using namespace std;

void printDigitName(int x);
void printDigitNameSwitch(int x);

int main()
{
    printDigitName(2);
    cout << "\n";

    printDigitNameSwitch(2);
    cout << "\n";
    return 0;
}

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

void printDigitNameSwitch(int x)
{
    switch (x)
    {
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;
        case 3:
            std::cout << "Three";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
}