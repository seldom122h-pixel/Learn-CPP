#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int rand_num = 1 + rand() % 15;
    int u_input;
    int attempts = 3;  

    cout << "I picked a number from 1 to 15. You have 3 attempts!" << endl;

    while (attempts > 0)  
    {
        cout << "Enter number (attempts left: " << attempts << "): ";
        cin >> u_input;
        
        if (u_input == rand_num) {
            cout << "You win!" << endl;
            return 0; 
        } else if (u_input < rand_num) {
            cout << "Too low!" << endl;
        } else if(u_input > rand_num) {
            cout << "Too high!" << endl;
        }
        attempts--;
    }

    cout << "Game over! The number was: " << rand_num << endl;
    
    return 0;
}