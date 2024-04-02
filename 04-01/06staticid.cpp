#include <iostream>

class Something{
    private:
        static int s_idGen;
        int m_id {};
    
    public:
        Something() : m_id { s_idGen++ } {}
    
    int getID() const {return m_id; }
};

int Something::s_idGen{1};

int main(){
    Something first{};
    Something second{};
    Something third{};

    std::cout << first.getID() << '\n';
    std::cout << second.getID() << '\n';
    std::cout << third.getID() << '\n';

    return 0;
}