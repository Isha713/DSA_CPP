#include<iostream>
using namespace std;
int main(){
    string light;
    cout<<"Enter traffic light color (red/yellow/green): ";
    cin>>light;
    if(light == "red")
        cout<<"STOP";
    else if (light == "yellow")
        cout<<"READY";
    else if (light == "green")
        cout<<"GO";
    else
        cout<<"Invalid input";
    return 0;
}
