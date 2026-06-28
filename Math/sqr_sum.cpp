#include <iostream>
#include <clocale>
#include <windows.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    cout << "Программа вычисляет сумму квадратов от 1 до N. Введите значение N: ";
    int n, s = 0, k = 1;
    cin >> n;

    while (k <= n)
    {
        s = s + k * k;
        k++;
    }
    cout << "Сумма квадратов от 1 до " << n << ": " << s;
    
    return 0;
}