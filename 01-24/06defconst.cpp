#include <iostream>

using namespace std;

//Preprocessor macro, bad practice to use these
#define pi 3.14

void areaCircle ()
{
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    float area = pi * r * r;
    cout << "Area of the circle is " << area << "\n";
}
int main()
{
    cout << "Program to find the area of a circle\n";
    areaCircle();
    return 0;
}