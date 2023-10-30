#include<iostream>
#include<vector>
using namespace std;
void printEven(int arr[],int size, int index, vector<int> &ans){ // index arr size and vector we have to pass int the function  important yeh hai ki hume ans ko reference bhjna hogga taaki ans ki tark rakh sake and changes original mai ho

    //base case
    if(index>=size){
        return;
    }
    //processing to store even number in the vector
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    //recursiveCall
    printEven(arr,size,index+1,ans);
}
int main(){
    int arr[]= {11,12,13,14,15};
    int size = 5;
    int index = 0;
    vector<int> ans;  //vector

    printEven(arr, size , index, ans);

    for(int num : ans){ //for each loop to print the arr for the even numbers
        cout<<num<<" ";
    }
return 0;
}