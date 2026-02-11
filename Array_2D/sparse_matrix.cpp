#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the number of rows and cols : ";
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> arr[i][j];
        }
    }
    cout<<"The original matrix is : \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "\nSparse Matrix Representation:\n";
    cout << "Row\tColumn\tValue\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]!=0){
                cout<<i<<"\t"<<j<<"\t"<<arr[i][j]<<endl;
            }
        }
    }

    return 0;
}