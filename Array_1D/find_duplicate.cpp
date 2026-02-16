#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,20,30,40};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element is: "<<arr[i]<<endl;
            }
        }
    }
    return 0;
}