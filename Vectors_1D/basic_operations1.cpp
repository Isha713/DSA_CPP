#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> V;
    //vector<int> A(5);

    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;
    
    V.push_back(1);
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    V.push_back(2);
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    V.push_back(3);
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    V.resize(5);
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    V.resize(10);
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    V.pop_back();
    cout<<"Size : "<<V.size()<<endl;
    cout<<"Capacity : "<<V.capacity()<<endl;

    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }
    for(int i=0;i<V.size();i++){

        cout<<V[i]<<endl;
    }

    V.insert(V.begin()+2,90);
    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }
    for(int i=0;i<V.size();i++){

        cout<<V[i];
    }

    V.erase(V.end()-2);
    for(int i=0;i<V.size();i++){
        cin>>V[i];
    }
    for(int i=0;i<V.size();i++){

        cout<<V[i];
    }
    

    return 0;
}