#include<iostream>
using namespace std;
void countZerosOnes(int arr[] ,int size){
    int countZeros=0;
    int countOnes=0;
    for(int i = 0; i<size;i++){
        if(arr[i]== 0){
            countZeros++;
        }
        if(arr[i]==1){
            countOnes++;
        }
    }
    cout<<"total number of zeros are "<<countZeros<<endl;
    cout<<"total number of ones are "<<countOnes;

}
int main(){
    int arr[] ={0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0};
    int size = 15;
    countZerosOnes(arr,size);

}