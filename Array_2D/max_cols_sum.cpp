#include<iostream>
#include<climits>
using namespace std;
int getMaxSum(int arr[][3],int rows,int cols){
    int maxColSum=INT_MIN;
    for(int j=0;j<cols;j++){
        int colSumI=0;
        for(int i=0;i<rows;i++){
            colSumI+=arr[i][j];
        }
        maxColSum = max(maxColSum,colSumI);
    }
    return maxColSum;
}
int main(){
    int array[3][3]={{1,2,3} , {4,5,6} ,{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<getMaxSum(array,rows,cols)<<endl;
    return 0;
}