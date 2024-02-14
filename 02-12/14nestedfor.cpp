#include <iostream>

using namespace std;
int main()
{
    // outer loops between 1 and n
    int n = 0;
    cout << "Enter an integer to incrementally count up to: ";
    cin >> n;
    for (int outer = 1; outer <= n; ++outer) {
        for (int inner = 1; inner <= outer; ++inner)
            cout << inner << " ";
        cout << "\n";
    }

    return 0;
}