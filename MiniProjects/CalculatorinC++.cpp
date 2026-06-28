#include <iostream>
using namespace std;

int main()
{
    //Первое число
    cout << "Enter first number: ";
    double num_1;
    cin >> num_1;

    //Второе число
    cout << "Enter second number: ";
    double num_2;
    cin >> num_2;

    //Операция
    cout << "Enter an operation (+)(-)(*)(/): ";
    char oper_n;
    cin >> oper_n;

    double res = 0;
    bool error = false; //По умолчанию переменная error - false

    //Проверка
    switch (oper_n)
    {
    case '+':
        res = num_1 + num_2;
        break;
    case '-':
        res = num_1 - num_2;
        break;
    case '*':
        res = num_1 * num_2;
        break;
    case '/':
        if (num_2 == 0) {
            cout << "Error: Division by zero!" << endl;
            error = true;
        } else {
            res = num_1 / num_2;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
        error = true; //При неверном значении перменная error становится True
    }

    if (!error) { //Если ошибок нет - выводим результат!
        cout << "Result: " << res << endl;
    }


    return 0;
}