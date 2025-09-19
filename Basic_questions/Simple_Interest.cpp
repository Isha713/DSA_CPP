#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the values of p : "<<endl;
    cin>>p;
    cout<<"Enter the values of r : "<<endl;
    cin>>r;
    cout<<"Enter the values of t : "<<endl;
    cin>>t;
   
    int Simple_Interest = (p*r*t)/100;
    cout<<"The Simple Interest is : "<<Simple_Interest;
    return 0;
}