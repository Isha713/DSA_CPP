#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    int arr[100][100];  // fixed size for safety
    cout<<"Enter matrix elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    if(rows == cols){
        cout << "Matrix is Square.";
    }
    else{
        cout << "Matrix is NOT Square.";
    }

    return 0;
}