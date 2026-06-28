#include <iostream>
#include <string>

using namespace std;

int pin;
double balance;


void getabalance(){
    cout << "Balance: " << balance;
}

int main(int argc, char const *argv[]){

    //Input
    cout << "Enter a pin-cod: ";
    cin >> pin;

    cout << "Enter a balance: ";
    cin >> balance;


    string menu = " / Mini-bank / 1. View balance / 2. Transaction / ";
    cout << menu;

    cout << ">> ";
    int cmd;
    cin >> cmd;

    if (cmd == 1)
    {
        getabalance();
    }
    else if (cmd == 2)
    {
        int checkPin;
        cout << "Enter a pin-code: ";
        cin >> checkPin;

        if (checkPin != pin)
        {
            cout << "Invalid pin-code!";
        }
        else {

            double amountTransaction;
            cout << "Enter transaction amount: ";
            cin >> amountTransaction;
            balance = balance - amountTransaction;
            getabalance();
            
        }
        
    }
    
    

   return 0;
}
