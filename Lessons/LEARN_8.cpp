#include <iostream>
#include <cstdlib>
#include <windows.h> 
#include <string> 
using namespace std;

    //Работа со строками

int main(int argc, char const *argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string word = "Hello";
    cout << word;
    word[0] = 'h'; //Строка как массив символов
    cout << word;

    return 0;
}
