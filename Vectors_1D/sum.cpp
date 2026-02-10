#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1 = {10,20,30};
    int sum = 0;
    for(int ele : vec1){
        sum+=ele;
    }
    cout<<sum;
    return 0;
}