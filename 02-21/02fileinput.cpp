#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inf{ "Sample.txt" };

    if (!inf) {
        std::cerr << "Couldn't open Sample.txt for reading!\n";
        return 1;
    }

    while (inf) {
        std::string strInput;
        //inf >> strInput;
        std::getline(inf, strInput);
        std::cout << strInput << '\n';
    }

    inf.close();
    return 0;
}