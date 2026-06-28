#include <iostream>
using namespace std;


//Циклы и операторы
int main(int argc, char const *argv[])
{
    
    for(int i = 0; i < 10; i++){ //Пока i меньше 10 - добавляем +1
        cout << i << "\n";
    }

    // while (true)
    // {
    //     int cmd;
    //     cout << "Enter stop number: ";
    //     cin >> cmd;
    //     if(cmd == 1){
    //         break; //Оператор 
    //     }

    // }


    for (int i = 1; i < 15; i++)
    {
        if(i % 2 == 0) {
            continue; //Оператор
        }

        cout << "El: " << i << endl;
    }
    

    
    

    return 0;
}
