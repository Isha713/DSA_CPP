#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);

    for(int i=0;i<5;i++){
   //     int element;
   //     cin>>element;  //this is done when we donot take the size of vector 
   //    v.push_back(element);

        //when we takes the size of vector then;
        cin>>v[i];
    }

    //for output
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}