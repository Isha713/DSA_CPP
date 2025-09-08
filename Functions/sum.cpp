#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    float c=7.9;
    float d=1.2;
    cout<<add(4,6)<<endl;

    cout<<add(9,0,2)<<endl;

    cout<<add(c,d);
    return 0;


}