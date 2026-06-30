#include <iostream>
#include <cstdlib>
#include <windows.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float mc;
    cout << "Введите метры в сек: ";
    cin >> mc;
    if (mc < 0)
    {
        cout << "Значение не может быть меньше нуля! ";
    } else {
        float kmh = (mc * 3600) / 1000;
        cout << mc << " м/c "<< "это " << kmh << " kм/ч";
    }

    return 0;
}