#include <iostream>
#include <fstream>

int main (){
    bool bits[16][4] = {false};

    //Print all 16 values:
    for(int i = 0; i < 16; i++){
        for (int j = 0; j < 4; j++)
            std::cout << bits[i][j];
        std::cout << '\n';
    }
    
    return 0;
}