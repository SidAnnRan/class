#include <iostream>

using namespace std;

void addbyval (int x, int y, int sum);
void addbyref (int x, int y, int& sum);

int main(){
    int x = 0, y = 0, sumval = 0, sumref = 0;
    cout << "Enter two numbers:\n";
    cin >> x;
    cin >> y;
    
    cout << "sumval before calling addbyval() is " << sumval << endl;
    
    addbyval (x, y, sumval);
    cout << "sumval after calling addbyval() is " << sumval << endl << endl;

    cout << "sum before calling addbyref() is " << sumref << endl;
    addbyref (x, y, sumref);
    cout << "sum after calling addbyref() is " << sumref << endl;

    return 0;
}

void addbyval (int x, int y, int sum) {
    sum = x + y;
    cout << "Inside addbyval(), sum is " << sum << endl;
}

void addbyref (int x, int y, int& sum) {
    sum = x + y;
    cout << "Inside addbyref(), sum is " << sum << endl;
}

