#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    int n = 5;
    for(int i = 0; i<5; i++){
        cout<<"array index for"<<i<<":";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"printing the array:";
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}