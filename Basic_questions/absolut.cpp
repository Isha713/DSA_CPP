#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    int absolute;
    if(num<0){
        absolute=-num;
    }
    else{
        absolute=num;
    }
    cout<<"The absolute value is : "<<absolute;
    return 0;
}