#include<iostream>
#include<vector>
using namespace std;    
int main(){
    vector<int>vec = {10,20,30,40,50};
    int start = 0;
    int end = vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    } 
    for(int ele : vec){
        cout<<ele<<" ";
    }
    return 0;
}