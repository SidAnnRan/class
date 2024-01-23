#include <iostream>

using namespace std;

void AddNumbers ()
{
    int x = 0, y = 0; //Begining of scope of x and y
	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	//Display result
	cout << x << " + " << y;
	cout << " = " << x + y << "\n";
	//End of scope of x and y
}

int main()
{
    cout << "Program to add 2 numbers\n";
	AddNumbers();
	return 0;
}