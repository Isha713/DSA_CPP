#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,6,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pair = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == 7){
                cout<<"Pair found: "<<arr[i]<<" and "<<arr[j]<<endl;
                pair++;
            }
        }
    }
    cout<<"Total number of pairs: "<<pair<<endl;
    return 0;
}