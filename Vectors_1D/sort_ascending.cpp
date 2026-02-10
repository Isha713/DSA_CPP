#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;            
int main(){
    vector<int>vec1 = {20,-50,10,5,80,-90};
    vector<int>vec2 = {20,-50,10,5,80,-90};
    //sort full vector
    sort(vec1.begin(),vec1.end());
    for(int ele : vec1){
        cout<<ele<<" ";
    }
    cout<<endl;

    //sort only a part of vector
    sort(vec2.begin()+1,vec2.begin()+4);//(sort elements from index 1 to 3)
    for(int ele : vec2){
        cout<<ele<<" ";
    }
    return 0;
}