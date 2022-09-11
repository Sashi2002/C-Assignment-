#include <iostream>

using namespace std;

int main() {
    int num1,num2,choice;
    cout << "Enter the choice for calculation :" << endl;
    cout << "1 : Addition" << endl;
    cout << "2 : Subtract" << endl;
    cout << "3 : Multiply" << endl;
    cout << "4 : Divide" << endl;
    cout << "5 : Modulus" << endl;

    cin >> choice;
    
    cout << "Enter first number : " << endl;
    cin >> num1 ;
    cout << "Enter second number : " << endl;
    cin >> num2 ;

    cout << "_____________" << endl;

    switch (choice)
    {
        case 1 :
            cout << num1 + num2;
            break;
        case 2 :
            cout << num1 - num2;
            break;
        case 3 :
            cout << num1 * num2;
            break;
        case 4 :
            cout << num1 / num2;
            break;
        case 5 :
            cout << num1 % num2;
            break;
    }
    return 0;
}