#include <iostream>

using namespace std;

void AddNumbers ()
{
    int x = 0, y = 0;
	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	//Display result
	cout << x << " + " << y;
	cout << " = " << x + y << "\n";
}

void MultiplyNumbers ()
{
    int x = 0, y = 0;
	cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	//Display result
	cout << x << " * " << y;
	cout << " = " << x * y << "\n";
}

int main()
{
	cout << "Addition\n";
	AddNumbers();
	cout << "Multiplication\n";
	MultiplyNumbers();
	return 0;
}