#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>> b;
    char op;
    cout<<"Enter operators : ";
    cin>>op;

    if(op == '+'){
        cout<<a+b;
    }else if(op == '-'){
        cout<<a-b;
    }else if(op == '*'){
        cout<<a*b;
    }else if(op == '/'){
        cout<<a/b;
    }else if(op == '%'){
        cout<<a%b;
    }else{
        cout<<"Please enter from the given operators "<<endl;
    }
    return 0;
}