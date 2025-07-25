#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    if(num%3==0 || num%5==0){
        cout<<"num is divisible by 3 or 5."<<endl;
    }
    else{
        cout<<"num is not divisible by 3 or 5."<<endl;
    }
    
    return 0;
}