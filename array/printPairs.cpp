#include<iostream>
using namespace std;
void printPairs(int arr[], int size){
    for(int i = 0 ; i<size; i++){
        for(int j = 0; j<size; j++){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
        }

    }
}
int main(){
    int arr[]={10,30,40,50};
    int size = 4;
    printPairs(arr,size);
    return 0;
}