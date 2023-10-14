#include<iostream>
using namespace std;
void swapZeroOnes(int arr[] , int size){
    int left = 0;
    int right = size - 1;
    while(left<right){
        while(arr[left]==0 && left<right){ // jab tak hume zero milega hum aage badhte rahenge 
            left++;
        }
        while(arr[right]==1 && left<right){ // jab tak 1 milega hume tab tak hum piche karte rahenge 
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

}
int main(){
    int arr[]={0,1,0,1,0,1,0,1,0,0,0};
    int size = 11;
    swapZeroOnes(arr,size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}