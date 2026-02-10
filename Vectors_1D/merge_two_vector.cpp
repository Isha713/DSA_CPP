#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,2,30,4,50};
    vector<int> u = {5,25,15,35,45};
    vector<int> merge;
    for(int ele : v){
        merge.push_back(ele);
    }
    for(int ele : u){
        merge.push_back(ele);
    }
    for(int ele : merge){
        cout<<ele<<" ";
    }
    return 0;
}