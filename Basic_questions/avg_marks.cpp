# include<iostream>
using namespace std;
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    cout<<"Enter the marks of sub1 : ";
    cin>>sub1;
    cout<<"Enter the marks of sub2 : ";
    cin>>sub2;
    cout<<"Enter the marks of sub3 : ";
    cin>>sub3;
    cout<<"Enter the marks of sub4 : ";
    cin>>sub4;
    cout<<"Enter the marks of sub5 : ";
    cin>>sub5;

    float avg=(sub1+sub2+sub3+sub4+sub5)/5;
    cout<<"The average marks are : "<<avg<<endl;

    return 0;
}