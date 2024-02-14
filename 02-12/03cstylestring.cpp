#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char userInput [21] = {'\0'};
    
    cout << "Enter a word NOT longer than 20 characters:" << endl;
    cin >> userInput;
    
    cout << "Length of your input was: " << strlen (userInput) << endl;
 
    return 0;
}