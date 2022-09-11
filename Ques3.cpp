#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, power;
    
    cout << "Enter the number : ";
    cin >> number;
    cout << "Enter the power : ";
    cin >> power;
    
    cout << number << " to the power " << power << " is : "<< pow(number , power);
    return 0;
}