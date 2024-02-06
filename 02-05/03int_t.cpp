//Describes the size of standard C++ Variables

#include<iostream>

int main()
{
	using namespace std;
	
	cout << "Size of fixed-width integer types:" << endl;
	
	cout << "Size of int8_t:\t\t\t\t\t" << sizeof(int8_t) << " bytes" << endl;
	cout << "Size of uint8_t:\t\t\t\t" << sizeof(uint8_t) << " bytes" << endl;
	cout << "Size of int16_t:\t\t\t\t" << sizeof(int16_t) << " bytes" << endl;
	cout << "Size of uint16_t:\t\t\t\t" << sizeof(uint16_t) << " bytes" << endl;
	cout << "Size of int32_t:\t\t\t\t" << sizeof(int32_t) << " bytes" << endl;
	cout << "Size of uint32_t:\t\t\t\t" << sizeof(uint32_t) << " bytes" << endl;
	cout << "Size of int64_t:\t\t\t\t" << sizeof(int64_t) << " bytes" << endl;
	cout << "Size of uint64_t:\t\t\t\t" << sizeof(uint64_t) << " bytes" << endl;

	return 0;
}