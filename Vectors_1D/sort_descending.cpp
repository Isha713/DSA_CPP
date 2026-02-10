#include<iostream>
#include<vector>    
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec1 = {20,-50,10,5,80,-90};
    vector<int>vec2 = {20,-50,10,5,80,-90};
    

    sort(vec1.begin(),vec1.end(),greater<int>());
    for(int ele : vec1){
        cout<<ele<<" ";
    }
    cout<<endl;

    //Sort using the loops
    for(int i=0;i<vec2.size();i++){
        for(int j=i+1;j<vec2.size();j++){
            if(vec2[i]<vec2[j]){
                swap(vec2[i],vec2[j]);
            }
        }
    }
     for(int ele : vec2){
        cout<<ele<<" ";
    }

    return 0;
}