#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum=0;
    do{
        sum+=n;
        n--;
    }
    while(n>0);

    cout<<sum;

    return 0;
}