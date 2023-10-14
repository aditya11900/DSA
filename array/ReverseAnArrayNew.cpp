#include<iostream>
using namespace std;
void ReverseArr(int arr[], int size){
int end = size-1;
// while(start < end ){
//     swap (arr[start] , arr[end]);
//     start++;
//     end--;
//}
for(int start=0;start <= end; start++,end--){
swap(arr[start] , arr[end]);
}
}
int main(){
    int arr[6]={0,1,2,3,4,8};
    int n = 6;
    //before reversing the arr 
    cout<<"before reversing the array ";
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
// after reversing the array;

cout<<"after reversing the array ";

    ReverseArr(arr, n);
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}