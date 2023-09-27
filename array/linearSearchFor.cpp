#include<iostream>
using namespace std;

//bruteForeCode
// int isPresent(int arr[],int size, int target){
//     for(int i = 0; i<size; i++){
//         if(arr[i]== target){
//             return true;
//         }
//     }
//      return false;
// }

int isPresent(int arr[], int size, int target){
    bool found = false;
    int i = 0;
    while(i<size){
        if(arr[i]==target){
            found = true;
            return i;
            break;
        }
        i++;
    }
    if(found==true){
        cout<<"number is present"<<i;
    }else{
        cout<<"number is not present";
    }
}
int main(){
    int arr[5]={0,1,2,3,4};
    int n = 5;
    int target = 3;
    isPresent(arr,n,target);
}