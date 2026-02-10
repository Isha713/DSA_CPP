#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    int i=0;
    while ((i<v.size())){
        cin>>v[i++];
    }
    while (i<v.size()){
        cout<<v[i++]<<" ";
    }
    return 0;

}