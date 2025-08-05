#include <iostream>
using namespace std;
int main(){
    int num1, num2, hcf;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    int min = (num1 < num2) ? num1 : num2;
    for(int i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf=i;
        }
    }
    cout<<"HCF of "<<num1<<" and "<<num2<<" is: "<<hcf<<endl;
    return 0;
}
