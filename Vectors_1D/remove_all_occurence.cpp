#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,20,40,50};
    int target = 20;
    vector<int> newVector;
    for(int ele : v){
        if(ele!=target){
            newVector.push_back(ele);
        }
    }
    for(int ele : newVector){
        cout<<ele<<" ";
    }
    return 0;
}