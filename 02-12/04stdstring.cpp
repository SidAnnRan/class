#include <iostream>
#include <string>

using namespace std;

void setString (string s1);

int main()
{
	string empty {};
    string str = "this is an std::string";

	cout << "This is a C-style string, but " << empty << str << endl;
    cout << "Length of string str is " << str.length() << endl;

    str = "this is still an std::string"; //std::strings are dynamic so their size is changeable
    cout << "Length of string str is now " << str.length() << " and the string is now:\n";
    cout << str << endl << endl;

    string s1 = "";
    cout << "Before calling setStringl() in main()\n";
    cout << "s1: " << s1 << endl;
    setString(s1);
    cout << "After calling setString() in main()\n";
    cout << "s1: " << s1 << endl;

	return 0;
}

void setString (string s1) {
    cout << "Enter a string: " << endl;
    //cin terminates std::string input when it encounters whitespace
    cin >> s1;
    //getline(cin, s1);
    cout << "Inside setString\n";
    cout << "s1: " << s1 << endl;
}