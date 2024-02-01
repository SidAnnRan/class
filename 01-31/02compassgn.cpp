#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int Value = 0;
	cin >> Value;
	
	//Value = Value + 8; //can also be written as
	Value += 8;
	cout << "New Value = Value + 8 = " << Value << endl;
	//Value = Value - 2; //can also be written as
	Value -= 2;
	cout << "New Value = Value - 2 = " << Value << endl;
	//Value = Value / 4; //can also be written as
	Value /= 4;
	cout << "New Value = Value / 4 = " << Value << endl;
	//Value = Value * 4; //can also be written as
	Value *= 4;
	cout << "New Value = Value * 4 = " << Value << endl;
	//Value = Value % 100; //can also be written as
	Value %= 100;
	cout << "New Value = Value % 100 = " << Value << endl;
}