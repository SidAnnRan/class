#include <iostream>
#include <string>

using namespace std;

void setStringsByVal (string s1, string s2);
void setStringsByRef (string& s1, string& s2);
int main()
{
	string empty {};
    string str = "this is an std::string";

	cout << "This is a C-style string, but " << empty << str << endl;
    cout << "Length of string str is " << str.length() << endl;

    str = "this is still an std::string"; //std::strings are dynamic so their size is changeable
    cout << "Length of string str is now " << str.length() << " and the string is now:\n";
    cout << str << endl << endl;

    //Call by value
    string s1 = "", s2 = "";
    cout << "Before calling setStringsByVal() in main()\n";
    cout << "s1: " << s1 << endl << "s2: " << s2 << endl;
    setStringsByVal(s1, s2);
    cout << "After calling setStringsByVal() in main()\n";
    cout << "s1: " << s1 << endl << "s2: " << s2 << endl << endl;

    //Call by reference
    string s3 = "", s4 = "";
    cout << "Before calling setStringsByRef() in main()\n";
    cout << "s3: " << s3 << endl << "s4: " << s4 << endl;
    setStringsByRef(s3, s4);
    cout << "After calling setStringsByref() in main()\n";
    cout << "s3: " << s3 << endl << "s4: " << s4 << endl;

	return 0;
}

void setStringsByVal (string s1, string s2) {
    cout << "Enter a string: " << endl;
    //cin terminates std::string input when it encounters whitespace
    cin >> s1;
    cout << "Enter another string: " << endl;
    cin >> s2;
    cout << "Inside setStringsByVal,\n";
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
}

void setStringsByRef (string& s3, string& s4) {
    cout << "Enter a string: " << endl;
    //std::getline() 
    getline(cin >> ws, s3); //std::ws is an input manipulator that tells cin to ignore leading whitespaces
    cout << "Enter another string: " << endl;
    getline(cin >> ws, s4);
    cout << "Inside setStringsByRef,\n";
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
}

