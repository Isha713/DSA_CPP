#include<iostream>
using namespace std;
int isArmstrong(int num){
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    return sum == originalNum;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isArmstrong(num)){
        cout << num << " is an Armstrong number." << endl;
    }else{
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}