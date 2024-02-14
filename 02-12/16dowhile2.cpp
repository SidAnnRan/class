//Input a number from the user until they enter a value in range 1-3
#include <iostream>

using namespace std;

int main()
{
    // selection must be declared outside while-loop, so we can use it later
    int selection = 0;

    do 
    {
        cout << "Enter a number in the range 0-3: \n";
        cin >> selection;
    } while (selection < 0 || selection > 3);

    cout << "You entered " << selection << "\n";

    return 0;
}