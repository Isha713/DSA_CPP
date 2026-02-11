#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and cols: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe Original Matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // move to next line after each row
    }

    cout << "\nSparse Matrix Representation:\n";
    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                cout << i << "\t" << j << "\t" << arr[i][j] << endl;
            }
        }
    }
    cout << "\nTranspose of Sparse Matrix Representation:\n";
    cout << "Row\tColumn\tValue\n";
    for (int j = 0; j < cols; j++) {        
        for (int i = 0; i < rows; i++) {
            if (arr[i][j] != 0) {
                cout << j << "\t" << i << "\t" << arr[i][j] << endl; 
            }
        }
    }

    return 0;
}
