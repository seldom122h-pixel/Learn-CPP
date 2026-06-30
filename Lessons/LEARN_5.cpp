#include <iostream>
#include <clocale>
#include <windows.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int matrix[3][2] = { //Многомерный массив
        {2, 2},
        {3, 3},
        {4, 4}
    };
    //cout << matrix[1][1] << endl; //3
    //cout << matrix[0][1] << endl; //2

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}