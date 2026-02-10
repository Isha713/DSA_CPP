#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,10,20,10};
    vector<int> newvec;
    for(int ele : v){
        bool isDuplicate = false;
        for(int unique : newvec){
            if(ele == unique){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            newvec.push_back(ele);
        }
    }
    for(int ele : newvec){
        cout<<ele<<" ";
    }
    return 0;
}