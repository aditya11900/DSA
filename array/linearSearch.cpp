#include<iostream>
using namespace std;
int main(){
    int arr[5] ={10,20,50,60,90};
    int n = 5;
    int target=50;
    bool flag =0;
    int index = -1;
    for(int i =0;i<n;i++){
        if(target==arr[i]){
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag == 1){
        cout<<"found at index "<< index;
    }else{
        cout<<"not found";
    }
}