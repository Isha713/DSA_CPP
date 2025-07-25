#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    if(n <= 1){
        isPrime = false;
    }
    else{
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is a Prime Number." << endl;
    else
        cout << n << " is NOT a Prime Number." << endl;

    return 0;
}
