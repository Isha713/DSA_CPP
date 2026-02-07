#include<iostream>
using namespace std;
long long factorial(int num){
    if(num ==0 || num ==1){
        return 1;
    }
    long long fact = 1;
    for(int i = 1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    if(r>n || n<0 || r<0){
        cout<<"Invalid input";
        return 0;
    }
    long long nCr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<nCr;
    return 0;
}