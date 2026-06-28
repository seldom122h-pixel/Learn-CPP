#include <iostream>

//Условные конструкции if/else
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
    

}
