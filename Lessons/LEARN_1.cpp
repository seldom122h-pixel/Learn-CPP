#include <iostream>
#include <string>

//Перменные и типы данных
int main()
{
    // int num_1 = 100;
    // num_1 = 20; //Можно изменить
    // std::cout << "Variable: " << num_1 << std::endl;

    double a, b;
    std::cout << "Enter num 1: ";
    std::cin >> a; //Input

    std::cout << "Enter num 2: ";
    std::cin >> b; //Input

    double result = a + b;

    std::cout << "Result: " << result << std::endl;

    std::cout << "Enter your name: ";
    std::string name; //Строкаki
    std::cin >> name;

    std::cout << "Hello, " << name << std::endl;

    unsigned int num_uns = 4000; //Не включает в себя отрицательные числа

    char sym = 'N'; //1 Символ
    bool IsHappy = true; //Буллевое значений true/false


    return 0;
}