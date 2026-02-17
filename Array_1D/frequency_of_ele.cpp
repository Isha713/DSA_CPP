#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,20,40,50,20,20,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int arr_count[max+1]={0};
    for(int i=0;i<size;i++){
        arr_count[arr[i]]++;
    }
    int arr_cumulative[max+1]={0};
    arr_cumulative[0] = arr_count[0];
    for(int i=1;i<=max;i++){
        arr_cumulative[i] = arr_cumulative[i-1] + arr_count[i];
    }
    for(int i=0;i<=max;i++){
        if(arr_count[i]>0){
            cout<<"Frequency of "<<i<<" is: "<<arr_count[i]<<endl;
        }
    }
    return 0;
}