# Problem 4

In the following code, variable `x` is initialized at the beginning of the `main` function. What is its value after `Setx` 
is called (this point is highlighted in the code with a comment)? Enter the value in `solutions.csv` in the space provided 
for problem 4.
```
#include <iostream>

using namespace std;

void Setx ()
{
	int x = 0;
    cout << "Setting value of x to 111\n";
	x = 111;
    cout << "x = " << x << endl;
}

int main()
{
    int x = 23; 
	Setx ();
	
    //At this point of the program, what is the value of x?
	
	return 0;
}
```