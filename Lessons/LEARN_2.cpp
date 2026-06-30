#include <iostream>

//Условные конструкции if/else и switch\case
int main(int argc, char const *argv[])
{
    int value = 20;

    if(value > 10) {
        std::cout << "Ok!" << std::endl;
    }

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18) {
        std::cout << "Verification passed" << std::endl;
    } 
    else if(age == 0 || age < 0) {
        std::cout << "Invalid value" << std::endl;
    }
    else {
        std::cout << "Verification failed" << std::endl;
    }

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

}
