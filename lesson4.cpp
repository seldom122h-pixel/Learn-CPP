#include <iostream>

int main(int argc, char const *argv[])
{
    
    int money = 2000;

    switch(money){
        case 1000: std::cout << "You have 1000$" << std::endl;
        break;

        case 2000: std::cout << "You have 2000$" << std::endl;
        break;

        case 5000: std::cout << "You have 5000$" << std::endl;
        break;

        default: std::cout << "Unknown amount" << std::endl;
    }

    return 0;
}
