#include <iostream>
#include<cstring>

using namespace std;

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main() {
   string s = "1234abcd";
    reverse(s);
    return 0;

}

