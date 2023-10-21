#include<iostream>
using namespace std;
void printArrayWithRecursion(int arr[],int size, int index){
    //base case yeha pr yeh hai ki jab hm size-1 jo ki range se bhr ho jaye to hume rukna hai
    if(index>=size){
        return;
    }
    cout<<arr[index]<<" ";
    //recursive call
    printArrayWithRecursion(arr,size,index+1); // array pass karenge size pass karenge aur index+1 kar denge kyoki first index to humne print kar diya hai to next call recursion sambhal lega 

}
int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    int index = 0;
    printArrayWithRecursion(arr,size,index);
}