#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            if (i != 2) {
                cout << ", ";
            }
            cout << i;
        }
    }
    return 0;
}
