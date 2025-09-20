#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    int ans=0;
    int power=1;
    while(num>0){
        int lastdigit = num%10;
        ans+=lastdigit*power;
        power*=2;
        num/=10;

    }
    cout<<ans;

    return 0;
}