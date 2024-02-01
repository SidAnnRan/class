#include <iostream>

using namespace std;

int main () {
    int arr [5] = {0};
    //Prevent this sort of behavior in your programs
    cout << "Trying to print out of bounds element: " << arr[5] << endl;
    return 0;
}