#include<iostream>
using namespace std;
int main(){
    int target = 34;
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    bool found = false;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                cout<<"Element fount at row "<<i<<" and column "<<j;
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
    return 0;
}