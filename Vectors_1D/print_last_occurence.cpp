#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10,20,30,40,1,10,20,30,10};
    int target =10;
    int occurence = -1;
    for(int i=0;i<vec.size();i++){
        if(vec[i] == target){
            occurence = i;
        }
    }
    if(occurence != -1){
        cout<<"Last occurence of "<<target<<" is at index "<<occurence<<endl;
    }
    return 0;
}