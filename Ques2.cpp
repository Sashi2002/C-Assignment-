#include <iostream>

using namespace std;

int main() {
    cout << "Numbers divisible by 8 and multiple of 5 between 1000 and 2000 are :" << endl;

    for(int i = 1000; i <= 2000 ; i++){
        if (i % 8 == 0 && i % 5 == 0){
            cout << i << endl;
        }
    }

    return 0;
}