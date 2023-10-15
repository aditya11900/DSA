#include<iostream>
using namespace std;
void swapNegative(int arr[], int size){ //two pointer approach 
    int j = 0;
    for(int index= 0; index<size;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main(){
int arr[]={-7,28,-3,9,7,1,0};
int size = 7;
swapNegative(arr , size);
for(int i = 0; i<size;i++){
cout<<arr[i]<<" ";
}
}