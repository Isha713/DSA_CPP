#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    int ans=0;
    int power=1;
    while(num>0){
        int paritydigit=num%2;
        ans+=paritydigit*power;
        power*=10;
        num/=2;
    }
    cout<<ans;
    return 0;
}