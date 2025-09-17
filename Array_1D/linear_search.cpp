#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int key=40;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}