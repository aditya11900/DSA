#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size, int index){
    //base case 
    if(index>size){
        return true; // agr ek element hoog to wo true return karega  
    }
    // processing 

    if(arr[index]>arr[index-1]){
        bool aageKaAns = isSorted(arr,size,index+1); // recursive call hai yeh
        return aageKaAns; // ye kuch ans return karega 
    }else{
        return false;
    }
}

int main(){
int arr[]={10,50,60,20,30};
int size = 5;
int index = 1;
bool checkSorted = isSorted(arr,size,index);
if(checkSorted){
    cout<<"array is sorted";
}else{
    cout<<"array is not sorted";
}

return 0;
}