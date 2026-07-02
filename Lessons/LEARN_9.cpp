#include <iostream>
#include <cstdlib>
#include <windows.h> 
#include <string> 
using namespace std;

    //Функции

void func(string name);

void sum(int a, int b);

int add(int c, int d);


int main(int argc, char const *argv[]){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    func("Alex");
    sum(10, 20);
    int res = add(20, 10);
    cout << res;

    return 0;
}

void func(string name){ //Ничего не возвращает
    cout << "Hello, " << name << " !" << endl;
}

void sum(int a, int b) { //Ничего не возвращает
    cout << (a + b) << endl;
}

int add(int c, int d) {
    return c * d;
}
