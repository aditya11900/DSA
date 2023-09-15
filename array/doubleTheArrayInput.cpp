#include<iostream>
using namespace std;
int main (){
    int arr[10] ={};
    int n = 10;
    for(int i =0; i<n;i++){
        cout<<"enter values for the index : "<<i <<endl;
        cin>>arr[i];
    }
    cout<<"printing the 2x array : ";
    for(int i= 0; i<n; i++){
        arr[i] =2*arr[i];
        cout<<arr[i]<<" ";
    }
}