#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    if(n<0){
        cout<<"Factorial is not defined for the negative numbers";
        return 0;
    }
    if(n==0 || n==1){
        cout<<"Factorial is 1";
        return 0;
    }
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}