#include <iostream>

using namespace std;


void Choice ()
{
    int choice = 0, x = 0, y = 0;
    cout << "What is your choice? ";
    cin >> choice;
    cout << "\n";
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << endl;
}

int main () {
    Choice ();
    return 0;
}