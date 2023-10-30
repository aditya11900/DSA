#include<iostream>
using namespace std;
void doubleTheArr(int arr[],int size,int index){
    //basse case
    if(index>=size){
        return;
    }
    //processing
    arr[index]= 2*arr[index];
    //recursion
    doubleTheArr(arr, size , index+ 1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    int index = 0;
    doubleTheArr(arr,size,index);
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}