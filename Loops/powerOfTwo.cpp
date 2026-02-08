#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"NOT the power of two";
    }
    while(n>1){
        if(n%2!=0){
            cout<<"NOT the power of two";
            return 0;
        }
        n/=2;
    }
    cout<<"YES, it is the power of two";
    return 0;
}