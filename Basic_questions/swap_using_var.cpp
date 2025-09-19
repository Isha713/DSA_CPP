#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a becomes : "<<a<<endl;
    cout<<"After swapping b becomes : "<<b<<endl;

    return 0;
}