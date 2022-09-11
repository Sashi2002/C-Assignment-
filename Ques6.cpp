#include<iostream>
#include <cstdlib>

using namespace std; 

void checker(int number) {
    cout << "Enter number between 1 - 9 :" ;
    int input;
    cin >> input;

    if (input == number) {
        cout << "Well guessed! :)";
    } else {
        cout << "Please try again :(";
        checker(number);
    }
}

int main() { 
    int num = 1 + (rand() % 9);
    checker(num);
    return 0;
}
