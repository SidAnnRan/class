#include <fstream>
#include <iostream>

int main(){
    std::ofstream outf{"Sample.txt"};

    if (!outf){
        std::cerr << "Couldn't open Sample.txt!\n";
        return 1;
    }

    outf << "This is line 1\n";
    outf << "This is line 2\n";
    
    outf.close();

    return 0;
}