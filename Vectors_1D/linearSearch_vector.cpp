#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of the vector: "; 
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    
    bool found = false;
    for(int i=0; i<n; i++){
        if(v[i] == target){
            cout<<"Element found at index "<<i<<endl;
            found = true;
            break;
        }
    }
    
    if(!found){
        cout<<"Element not found in the vector"<<endl;
    }
}