#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int>v(n);
    for(int &ele:v){
        cin>>ele;
    }
    for(int &ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    return 0;
}