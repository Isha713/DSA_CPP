#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout<<n<<" is a prime number.";
    }else{
        cout<<n<<" is not a prime number.";
    }
    return 0;
}