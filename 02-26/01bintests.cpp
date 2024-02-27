#include <iostream>

int main (){
    //bool bits[16][4] = {false}; //Only sets top left element to false
    //bool bits[16][4] = {{false, false, false, false}, ..., {false, false, false, false}}
    //bool bits[16][4] = {false, false, ..., false}
    bool bits[16][4];
    for (int i = 0; i < 16; i++)
        for(int j = 0; j < 4; j++)
            bits[i][j] = false;
    
    //Print all 16 values:
    for(int i = 0; i < 16; i++){
        for (int j = 0; j < 4; j++)
            std::cout << bits[i][j];
        std::cout << '\n';
    }
    
    return 0;
}