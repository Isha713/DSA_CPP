# include<iostream>
using namespace std;
int main(){
    char vowels[5];

    //using for loop
    for(int idx=0;idx<5;idx++){
        cin>>vowels[idx];  
    }

    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";  
    }

//    //using for each loop
//     for(char&elements:vowels){
//         cin>>elements;
//     }

//     for(char&elements:vowels){
//         cout<<elements<<endl;
//     }

    return 0;
}