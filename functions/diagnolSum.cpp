#include<iostream>
using namespace std;
void diagnolSum(int arr[3][3], int row, int col){
     int sum = 0;
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][i]==arr[i][j]){
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
      int arr[3][3]={
    {1,2,3},
    {5,6,7},
    {9,10,11}
    };
    int row = 3;
    int col = 3;
 diagnolSum(arr, row, col);
}