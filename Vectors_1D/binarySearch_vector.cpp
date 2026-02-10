#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {20,30,40,50,60};
    int target = 400;
    int start = 0;
    int end = v.size() - 1;
    
    while(start<=end){
        int mid =start+(end-start)/2;
        if(v[mid] == target){
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(v[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<"Element not found in the vector"<<endl;
    return 0;
}