#include <iostream>

using namespace std;

void Choice ()
{
    int choice = 0, x = 0, y = 0;
    cout << "What is your choice? ";
    cin >> choice;
    cout << "\n";

    if (choice < 1) {
        cout << "Invalid choice!\n";
    } 
    else if (choice > 4) {
        cout << "Invalid choice!\n";
    }
    else {
        cout << "Enter the first number: ";
        cin >> x;
        cout << "Enter the second number: ";
        cin >> y;
        cout << endl;
        
        if (choice == 1) {
        cout << x << " + " << y << " = " << x + y << "\n";
        }
        else if (choice == 2) {
            cout << x << " - " << y << " = " << x - y<< "\n";
        }
        else if (choice == 3) {
            cout << x << " * " << y << " = " << x * y<< "\n";
        }
        else if (choice == 4) {
            cout << x << " / " << y << " = " << x / y<< "\n";
        }
    }
}