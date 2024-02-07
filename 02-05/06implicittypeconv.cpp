#include <iostream>

using namespace std;

void printFloat(float f)
{
	cout << "f = " << f << "\n";
}

void printInt(int i)
{
	cout << "i = " << i << "\n";
}

int main()
{
    cout << "Without implicit type conversions\n";
	printInt(5);
    printFloat(10.23);

    cout << "Implicitly converting int to float and float to int\n";
    printInt(5.5);
    printFloat(5);

	return 0;
}