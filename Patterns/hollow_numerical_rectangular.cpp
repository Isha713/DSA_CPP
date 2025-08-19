#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int m;
    cout<<"Enter the value of m : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n || j==m || i==1 || j==1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}