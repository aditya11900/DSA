#include<iostream>
using namespace std;
void sumWithRows(int arr[][4], int rows, int col){
    int sum = 0;
    for(int i = 0; i <rows ; i++){
        int sum = 0;
        for(int j = 0 ; j < col; j++){
             sum = sum + arr[i][j];
        }
        cout<<sum<<endl;

    }
}
int main(){
  int arr[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    };
    int row = 3;
    int col = 4;

    sumWithRows(arr, row, col);

}