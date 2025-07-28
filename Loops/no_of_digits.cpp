#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;

    int digits=0;
    while (num>0){
        digits++;
        num=num/10;
        
    }
    cout<<digits;
    return 0;
}