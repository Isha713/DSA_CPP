#include<iostream>
using namespace std;
void maketwice(int p){
        p=p*2;
        cout<<p<<endl;
    }
int main(){
    int p=8;
    maketwice(p);
    cout<<p;
    return 0;
}