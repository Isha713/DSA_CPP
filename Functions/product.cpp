#include<iostream>
using namespace std;
int product(int a,int b){
    int multiply=a*b;
        return multiply;
    }
// Function Prototype
float add(float,float);    
int main(){
    
    cout<<product(9,10)<<endl;
    cout<<add(4.5,4.2);
    return 0;
}
float add(float b,float c){
    float sum=b+c;
    return sum;
}