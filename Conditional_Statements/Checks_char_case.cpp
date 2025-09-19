#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>> ch;
    
    if(ch>=65 && ch<=90){
        cout<<ch <<" is uppercase character.\n";
    }else if( ch>=97 && ch<=122){
        cout<<ch<<" is a lowercase character.\n";
    }else{
        cout<<"Enter a valid character.";
    }

    return 0;
}