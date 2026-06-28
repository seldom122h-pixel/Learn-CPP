#include <iostream>

int main(int argc, char const *argv[])
{
    
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 21)
    {
        std::cout << "Access to 21+ content is open" << std::endl;
    }
    else if (age >= 18)
    {
        std::cout << "Access to 18+ content is open" << std::endl;
    }
    else if (age >= 16)
    {
        std::cout << "Access to 16+ content is open" << std::endl;
    }
    else {
        std::cout << "Content restricted to 16+" << std::endl;
    }

    return 0;
}
