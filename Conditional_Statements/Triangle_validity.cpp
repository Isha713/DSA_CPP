#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"Enter the value of angle1 : ";
    cin>>angle1;
    cout<<"Enter the value of angle2 : ";
    cin>>angle2;
    cout<<"Enter the value of angle3 : ";
    cin>>angle3;
    if((angle1+angle2+angle3)==180){
        cout<<"These angles form a valid triangle.";
    }
    else{
        cout<<"These angles doesnot form a valid triangle.";
    }

    return 0;
}