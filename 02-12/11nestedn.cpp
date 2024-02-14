#include <iostream>

using namespace std;
int main()
{
    // outer loops between 1 and n
    int outer = 1, n = 0;
    cout << "Enter an integer to incrementally count up to: ";
    cin >> n;
    while (outer <= n)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        int inner = 1;
        while (inner <= outer)
        {
            cout << inner << " ";
            ++inner;
        }

        // print a newline at the end of each row
        cout << '\n';
        ++outer;
    }

    return 0;
}