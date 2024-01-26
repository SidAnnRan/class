#include <iostream>
//This program won't compile as is
//using namespace std;

void AddNumbers ()
{
    //using namespace std;
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
    //using namespace std;
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
    using namespace std;
	cout << "Addition\n";
	AddNumbers();
	cout << "Multiplication\n";
	MultiplyNumbers();
	return 0;
}