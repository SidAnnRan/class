#include <iostream>

using namespace std;

int main()
{
	cout << "Program to add 2 numbers\n";
	
	int x = 0, y = 0;
	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	//Display result
	cout << x << " + " << y;
	cout << " = " << x + y << "\n";
	
	return 0;
}