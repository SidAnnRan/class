//Program to print 0 to 10, except 5
#include <iostream>

using namespace std;

void printWhile();
void printFor();

int main() {
    printFor();
    printWhile();
}

void printWhile(){
    cout << "printWhile():\n";
    int i = 0;
    while (i <= 10){
        if (i == 5)
            continue;
        cout << i << "\n";
        i++;
    }
}

void printFor(){
    cout << "printFor():\n";
    for (int i = 0; i <= 10; i++){
        if (i == 5)
            continue;
        cout << i << "\n";
    }
}