#include <iostream>
using namespace std;

int main()
{
	int matrix [3][3] = {{-501, 206, 2011}, {989, 101, 206}, {303, 456, 596}};
    int i = 0, j = 0;
    
    //int i = 0;
    
    
    while (i < 3) {
        cout << "Row " << i <<":\t";
        //int j = 0;
        while (j < 3) {
            cout << matrix [i][j];
            if(j == 2)
                cout << "\n";
            else
                cout << "\t";
            j++;
        }
        j = 0; //Reset for next iteration
        i++;
    }
	return 0;
}