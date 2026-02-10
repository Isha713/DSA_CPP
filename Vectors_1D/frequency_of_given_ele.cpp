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
    cout<<"Enter the element to find its frequency: ";
    cin>>target;
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(v[i] == target){
            count++;
        }
    }
    
    cout<<"Frequency of "<<target<<" is: "<<count<<endl;
}