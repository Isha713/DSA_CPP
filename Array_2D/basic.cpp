#include<iostream>
using namespace std;
int main(){
    //int arr[2][3];
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<array[2][2]<<endl;
    array[1][2]=100;
    cout<<array[1][2]<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}