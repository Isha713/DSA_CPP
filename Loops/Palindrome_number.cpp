#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int original = n;  
    int rev = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n /= 10;
    }
    cout << "The reverse of n is: " << rev << endl;
    if(original == rev) {
        cout << "It is a palindrome number.";
    } else {
        cout << "It is not a palindrome number.";
    }
    return 0;
}
