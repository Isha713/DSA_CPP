#include<iostream>
using namespace std;
int main(){
    int arr[] ={10,20,30,40,50};
    int length=sizeof(arr)/sizeof(arr[0]);

    //for loop
    for(int idx=0;idx<length;idx++){
        cout<<arr[idx]<<endl;
    }
    cout<<"Thankyou"<<endl;

    //for each loop which traverse through each element of array.
    for(int ele:arr){
        cout<<ele<<endl;
    }
    return 0;
}