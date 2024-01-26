#include <iostream>

using namespace std;

void areaCircle ()
{
    float r;
    float pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    //pi = 23.2;
    float area = pi * r * r;
    cout << "Area of the circle is " << area << "\n";
}
int main()
{
    cout << "Program to find the area of a circle\n";
    areaCircle();
    return 0;
}