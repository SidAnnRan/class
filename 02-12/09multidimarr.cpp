#include <iostream>
using namespace std;

int main()
{
	int matrix [3][3] = {{-501, 206, 2011}, {989, 101, 206}, {303, 456, 596}};

	cout << "Row 0:\t" << matrix [0][0] << "\t" << matrix [0][1] << "\t" << matrix [0][2] << endl;
	cout << "Row 1:\t" << matrix [1][0] << "\t" << matrix [1][1] << "\t" << matrix [1][2] << endl;
	cout << "Row 2:\t" << matrix [2][0] << "\t" << matrix [2][1] << "\t" << matrix [2][2] << endl;

	return 0;
}