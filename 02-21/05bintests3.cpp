#include <fstream>
#include <iostream>

int main(){
    bool bits[16][4] = {false};

    for(int i = 0; i < 16; i++){
        for (int j = 0; j < 4; j++) {
            if (i > 7)
                bits[i][0] = true;
            if ((i > 3 && i < 8) || (i > 11))
                bits[i][1] = true;
            if ((i > 1 && i < 4) || (i > 5 && i < 8) || (i > 9 && i < 12) || (i > 13))
                bits[i][2] = true;
            if (i % 2 == 1)
                bits[i][3] = true;
        }
    }

    std::ofstream outf{"bintests"};

    if (!outf){
        std::cerr << "Couldn't open bintests!\n";
        return 1;
    }

    //Print all 16 values:
    for(int i = 0; i < 16; i++){
        for (int j = 0; j < 4; j++)
            outf << bits[i][j];
        outf << '\n';
    }
    outf.flush();
    outf.close();

    return 0;
}