#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the vakue of num : ";
    cin>>num;
    if(num%2==0){
        cout<< num <<" is an even number.";
    }
    else{
        cout<< num <<" is an odd number.";
    }    
    
    return 0;
}