#include<iostream>
using namespace std;    
int main()    
{    
    int n;    
    cout<<"Enter the size of array: ";    
    cin>>n;    
    int arr[n-1];    
    cout<<"Enter the elements of array: ";    
    for(int i=0; i<n-1; i++)    
    {    
        cin>>arr[i];    
    }    
    long long total_sum = n*(n+1)/2; 
     long long arr_sum = 0; 
    for(int i=0; i<n-1; i++)    
    {    
        arr_sum += arr[i]; 
    }    
    int missing_number = total_sum - arr_sum; 
    cout<<"The missing number is: "<<missing_number<<endl;    
    return 0;    
}