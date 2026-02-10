#include<iostream>;
#include<vector>;
using namespace std;
int main(){
    vector<int>vec1;
    vector<int>vec2 = {10,20,30};
    vector<int>vec3(5,0); // 5 elements with value 0
    cout<<"vec1 size: "<<vec1.size()<<endl;
    cout<<"vec2 size: "<<vec2.size()<<endl;
    cout<<"vec3 size: "<<vec3.size()<<endl;
    cout<<"vec2 first element: "<<vec2[0]<<endl;

    
    return 0;
}