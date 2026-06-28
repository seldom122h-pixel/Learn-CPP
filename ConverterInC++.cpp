#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << " < Converter In C++ >\n";
    cout << " - 1. USD to RUB  -   \n";
    cout << " - 2. EUR to RUB  -   \n";
    cout << " - 3. JPY to RUB  -   \n";
    cout << "=> ";

    int cmd;
    cin >> cmd;

    if (cmd == 1)
    {
        double usd_to_rub;
        cout << "USD Amount: ";
        cin >> usd_to_rub;
        if (usd_to_rub < 0)
        {
            cout << "Invalid value!";
        }
        else {
            double result_ur = usd_to_rub * 78.87;
            cout << "Result: " << result_ur << " RUB";
        }

    }
    else if (cmd == 2)
    {
        double eur_to_rub;
        cout << "EUR Amount: ";
        cin >> eur_to_rub;
        if (eur_to_rub < 0)
        {
            cout << "Invalid value!";
        }
        else {
            double result_er = eur_to_rub * 89.83;
            cout << "Result: " << result_er << " RUB";
        }
    }
    else if (cmd == 3)
    {
        double jpy_to_rub;
        cout << "JYP Amount: ";
        cin >> jpy_to_rub;
        if (jpy_to_rub < 0)
        {
            cout << "Invalid value!";
        }
        else {
            double result_jr = jpy_to_rub * 0.49;
            cout << "Result: " << result_jr << " RUB";
        }
    }
    else {
        cout << "Invalid value!";
    }
    

    return 0;
}
