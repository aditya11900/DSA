#include<iostream>
using namespace std;
int binarySearch(int arr[], int size,int start,int end,int target){
    //base case
    if(start>end){
        return - 1;
    }
    //ek case to hume solve karna hogga
    int mid = start + (end - start)/2;
    if(arr[mid]== target){
        return mid;
    }
    // right mai jaane ke liye
    if(arr[mid] < target){
        //right mai jaane ke liye jai yeh 
        return binarySearch(arr,size,mid+1,end,target);
    }else{
        //left mai jaane ke liye hai yeh
        return binarySearch(arr,size,start,mid-1,target);

    }

}
int main (){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int start = 0;
    int end = size - 1;
    int target = 50;
    int foundIndex = binarySearch(arr,size,start,end,target);

    if(foundIndex != -1){
        cout<<"target found at: "<<foundIndex<<endl;
    }else{
        cout<<"target not found";
    }
return 0;

}