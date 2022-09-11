#include<iostream>
#include<cstring>

using namespace std; 

int main() {
    int num1 , num2; 
    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    if(num1 + num2 > 105 && num1 + num2 < 200) {
        cout << 200;
    } else {
        cout << num1 + num2;
    }

    return 0;
}