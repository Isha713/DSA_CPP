#include<iostream>
using namespace std;
bool linearSearch(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                cout<<"Element found at row "<<i<<" and column "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int array[3][3]={{1,2,3} , {4,5,6} ,{7,8,9}};
    int rows=3;
    int cols=3;
    if(linearSearch(array,rows,cols,8)){
        cout<<"Key found"<<endl;
    }else{
        cout<<"key not found";
    }

    return 0;
}