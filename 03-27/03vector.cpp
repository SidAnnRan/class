#include <iostream>
#include <vector>

int main()
{
	// Value initialization (uses default constructor)
	std::vector<int> empty{}; // vector containing 0 int elements

    std::vector<int> primes{ 2, 3, 5, 7 };          // vector containing 4 int elements with values 2, 3, 5, and 7

    std::cout << "The first prime number is: " << primes[0] << '\n';
    std::cout << "The second prime number is: " << primes[1] << '\n';
    std::cout << "The sum of the first 5 primes is: " << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';
    //std::cout << "Out of bounds element: " << primes[5] << '\n';
    //std::cout << "Out of bounds element: " << primes.at(5) << '\n';

    std::vector<int> data( 10 ); // vector containing 10 int elements, value-initialized to 0

    std::cout << "Elements in data: ";
    for (int i : data){
        std::cout << i << " ";
    }
    std::cout << '\n';

    std::cout << "Length of data is " << data.size() << '\n';

    int length = data.size();

    data.resize(5);

    std::cout << "Length of data is now " << data.size() << '\n';
	
    std::vector<int> ints{}; //0 int elements
    std::cout << "Length of ints: " << ints.size() << '\n';
    for (int i = 1; i <= 10; i++){
        ints.push_back(i);
    }
    std::cout << "Length of ints: " << ints.size() << '\n';
    std::cout << "ints is now: ";
    std::cout << "Top of ints is " << ints.back() << '\n';
    
    for (int i : ints){
        //std::cout << ints[i] << " "; //What's happening here?
        std::cout << i << " ";
    }
    std::cout << '\n';
    std::cout << "Length of ints: " << ints.size() << '\n';

    return 0;
}