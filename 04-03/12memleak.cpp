#include <iostream>

int main(){
    int x {5};
    {
        int* ptr {new int};
        ptr = &x;
    }
    //Can't deallocate ptr anymore
    //delete ptr;
    //ptr = nullptr;
    return 0;
}