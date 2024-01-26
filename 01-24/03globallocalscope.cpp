#include <iostream>

using namespace std;

int x = 0;
int y = 0;
int sum = 0;

void AddNumbers ()
{
	int x = 0, y = 0, sum = 0; //Starting scope of local x, y, and sum
    cout << "Enter the first number: ";
	cin >> x;
	
	cout << "Enter the second number: ";
	cin >> y;
	
	sum = x + y;

	//Display result
	cout << "From AddNumbers:\n";
	cout << x << " + " << y;
	cout << " = " << sum << "\n";
}

int main()
{
	AddNumbers();
	
	cout << "From main:\n";
	cout << x << " + " << y;
	cout << " = " << sum << "\n";

	return 0;
}