#include<iostream>
#include<cstring>

using namespace std; 

int main() { 

    for (int i = 9 ; i >= 1 ; i--) {
        for (int j = i ; j >= 1 ; j--) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}