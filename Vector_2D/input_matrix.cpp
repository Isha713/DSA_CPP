#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>mat[i][j];
        }
    }

    cout << "Transpose of matrix:\n";
    for(int j = 0; j < cols; j++){
        for(int i = 0; i < rows; i++){
            cout<<mat[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}