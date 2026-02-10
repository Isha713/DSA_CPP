#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1 = {10,20,30};
    vector<int>vec2;
    vec2=vec1;
    for(int ele :vec2){
        cout<<ele<<" ";
    }
    return 0;   
}