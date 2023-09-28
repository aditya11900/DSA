#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 <size){
            swap(arr[i],arr[i + 1]);
        }
    }
}


int main(){
int even[4] = {0,1,2,3};
int odd[5] = {0,1,2,3,4};

swapAlternate(even , 4);
printArr(even ,  4);

cout<<endl;
swapAlternate(odd, 5);
printArr(odd,5);
}