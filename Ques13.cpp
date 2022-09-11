#include <iostream>
 
using namespace std;

int main(){
    string month;
    cout << "Enter month name : ";
    cin >> month; 
    if(month == "january"){ 
        cout << "No. of days : 31 days" <<endl;
    } else if(month == "february") { 
        cout << "No. of days : 28 or 29 days" <<endl;
    } else if(month == "march"){ 
        cout << "No. of days : 31 days" <<endl;
    } else if(month == "april"){ 
        cout << "No. of days : 30 days" <<endl;
    } else if(month == "may"){
        cout << "No. of days : 31 days" <<endl;
    } else if(month == "june"){
        cout << "No. of days : 30 days" <<endl;
    } else if(month == "july"){
        cout << "No. of days : 31 days" <<endl;
    } else if(month == "september"){
        cout << "No. of days : 30 days" <<endl;
    } else if(month == "october"){
        cout << "No. of days : 31 days" <<endl;
    } else if(month =="november"){
        cout << "No. of days : 30 days" <<endl;
    } else if(month == "december") {
        cout << "No. of days : 31 days" <<endl;
    } else { 
        cout << "Invalid input! Please enter valid month name.";
    }
    return 0; 
}