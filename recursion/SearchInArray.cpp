#include<iostream>
using namespace std;
bool NumberIsPresent(int arr[], int size, int target, int index){
    //base case ky hai humara ya to wo size se bhr chla jaye ya to indexx hume mil gaya ho
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    //recursive call
    bool aageKaAns = NumberIsPresent(arr,size,target,index+1);
    return aageKaAns;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    int target = 50;
    int index = 0;
    cout<<NumberIsPresent(arr,size,target,index)<<endl;
    return 0;
}