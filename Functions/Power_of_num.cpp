#include <iostream>
using namespace std;
int power(int base, int exp) {
    int result = 1;
    for(int i=1;i<=exp;i++) {
        result *=base;
    }
    return result;
}
int main(){
    int a, b;
    cout<<"Enter base and exponent: ";
    cin>>a>>b;
    cout<<a<< "^" <<b<< " = " <<power(a, b);
    return 0;
}
