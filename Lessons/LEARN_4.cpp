#include <iostream>
#include <clocale>
#include <windows.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //Массивы данных

    int array[5]; //Массив из 5 эл.

    array[0] = 1;
    array[1] = 10;
    array[2] = 20;
    array[3] = 30;
    array[4] = 40;

    //cout << array[2] << endl; //Элемент по 2 индексу
    array[0]++; // +1 к 0 индксу
    //cout << array[0] << endl;

    float arr_fl[5] = {1, 2, 3, 4, 5}; //Сразу присвоим значения массиву
    
    //Перебираем массив
    for (int i = 0; i < 5; i++) {
        cout << arr_fl[i] << endl;
    }

    //Практическое применение
    float cinarray[5];
    for (int i =0; i < 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> cinarray[i];
    }

    //Сумма и мин.элемент массива
    float summ = 0;
    float min = cinarray[0];
    for(int i = 0; i < 5; i++) { 
        summ += cinarray[i]; 
        if (cinarray[i] < min) {min = cinarray[i];}
    } 
    cout << "\nСумма массива: " << summ;
    cout << "\nМинимальный элемент массива: " << min;

    return 0;
}
