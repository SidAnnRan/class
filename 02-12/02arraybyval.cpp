#include <iostream>

using namespace std;

void printArray (int arr [], int LEN);
void arrayTimes5 (int arr [], int LEN);

int main () {
    const int LEN = 5;
    int arr[LEN] = {1, 2, 3, 4, 5};
    cout << "After initialization, arr = ";
    printArray(arr, LEN);
    arrayTimes5(arr, LEN);
    cout << "After times 5, arr = ";
    printArray(arr, LEN);
    return 0;
}

void printArray (int arr [], int LEN) {
    int i = 0;
    cout << "{";
    while(i < (LEN-1)){ 
        cout << arr[i] <<", ";
        i++;
    }
    cout << arr[i] << "}" << endl;
}

void arrayTimes5 (int arr [], int LEN) {
    int i = 0;
    while(i < LEN){
        arr[i] *= 5;
        i++;
    }
}