#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,34,54,23};
    int max=arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
   
    
    return 0;
}