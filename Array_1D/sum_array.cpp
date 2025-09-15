#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    // Input elements
    cout << "Enter 5 numbers: ";
    for (int &ele : arr) {
        cin >> ele;
    }
    // Display elements (without extra text)
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
    // Calculate sum
    for (int idx = 0; idx < length; idx++) {
        sum += arr[idx];
    }
    cout << "Sum of elements = " << sum << endl;
    return 0;
}
