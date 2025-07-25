# include <iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>33){
        if(marks>90){
            cout<<"Grade is : A";
        }
        else if(marks>80 && marks<90){
            cout<<"Grade is : B"<<endl;
        }
        else{
            cout<<"Grade is : C"<<endl;
        }
    }
    else{
        cout<<"Fails";
    }

    
    // Using Ternary Operator
    marks>33? cout<<"Pass"<<endl: cout<<"Fails"<<endl;
    return 0;
}