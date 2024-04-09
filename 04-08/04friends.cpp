#include <iostream>

class Something{
    private:
        int m_data{};
    public:
        int getData(){ return m_data; }
        friend void printData (Something& s);
        friend class SomethingSimilar;
};

class SomethingSimilar{
    public:
        void incrData(Something& s){
            s.m_data++;
        }
};

void printData(Something& s){
    std::cout << "Data = " << s.m_data << '\n';
}


int main(){
    Something s1{};
    SomethingSimilar s2{};
    printData(s1);
    s2.incrData(s1);
    printData(s1);
    return 0;
}