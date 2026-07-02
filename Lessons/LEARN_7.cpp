#include <iostream>
#include <cstdlib>
#include <windows.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    //Динмаические массивы
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int *nums = new int[3]; //заняли память
    nums[0] = 30;
    cout << nums[0];
    delete[] nums; //очистим память

    return 0;
}
