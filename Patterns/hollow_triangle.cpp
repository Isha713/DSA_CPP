#include<iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout<<" ";
        }
        if(i == n) {
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout<<i;
            }
        } else {
            cout<<i;
            if(i > 1) {
                for(int j = 1; j <= 2 * i - 3; j++) {
                    cout<<" ";
                }
                cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}
