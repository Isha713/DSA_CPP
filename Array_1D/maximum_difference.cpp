#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minTillNow = arr[0];
    int maxDiff = arr[1]-arr[0];
    for(int i=1;i<size;i++){
        if(arr[i] - minTillNow > maxDiff){
            maxDiff = arr[i] - minTillNow;
        }
        if(arr[i] < minTillNow){
            minTillNow = arr[i];
        }
    }
    cout<<"Maximum difference is: "<<maxDiff<<endl;
    return 0;
}