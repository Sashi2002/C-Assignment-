#include <iostream>
#include <cstring>

using namespace std;

int main() { 
    int strings=0,numbers=0,i,b;
    char str[100]; 

    cout<<"Enter a string : ";
    gets(str);
    b=strlen(str); 

   for(i=0;i<b;i++) {
      if(isdigit(str[i])){
      numbers++;
      }
     else if(isalpha(str[i])){
      strings++;
      }
}
 cout<<"Letters : "<<strings<<endl;
 cout<<"Digits : "<<numbers<<endl;

 return 0; 
}
