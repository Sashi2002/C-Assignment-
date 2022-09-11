#include<iostream>
#include<cstring>

using namespace std; 

int main() {
    int row,column; 
    cout << "Enter the number of rows of matrix : " ; 
    cin >> row;
    cout<< "Enter the number of columns of matrix : ";
    cin >> column;
    int matrix[row][column];

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            matrix[i][j] = i*j;
        }
    }

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}