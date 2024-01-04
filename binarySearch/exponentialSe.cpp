#include<iostream>
using namespace std;
int binarySrch(int arr[], int start, int end, int find){
    while(start<=end){
    int mid = (start + end)/2;
    if(arr[mid]==find){
        return mid;
    }else if(find > arr[mid]){
        start = mid + 1;
    }else{
        end = mid - 1;
    }
    }
    return -1;
}
int exponential(int arr[], int size, int find)
{
    if(arr[0]== find) return 0;
    int i = 1;
    while(i<size && arr[i] <= find){
        i = i*2;
    }
    return binarySrch(arr, i/2 , min(i, size-1), find);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr)/sizeof(int);
    int find = 13;
    int ans = exponential(arr,size,find);
    cout<<ans<<endl;
    return 0;
}