#include<iostream>
#include<limits.h>
using namespace std;
int findMinNumber(int arr[], int size){ // range hotta hai 2^31 - 1
    int minAns = INT_MAX; // yeha pr minAns ko initilize kar do INT_MAX ke saath kyoki ish se badda number koi hogga nhi int mai 
    for(int i = 0; i<size; i++){ // loop taaki haar eek element ko transver kar dega index 0 se lekar n-1
        if(arr[i] < minAns){  // agr arr[i] jo ki index hai wo choota hai int max se to assign kar do ushke badd i++
            minAns = arr[i]; // minAns mai wo value assign ho jayegi
        }
    }
    return minAns;  // return ans;
}
int findMaxNumber(int arr[], int size){
    int maxAns = INT_MIN; // jo v number hogga wo INT_MIN se chotta nhi hogga wo  range hoota hai 2^31
    for(int i = 0 ; i<size; i++){  // loop to transvers each and every element
        if(arr[i] > maxAns){    //agr arr jo hai wo greater than INT_MIN wo assign ho jayega
            maxAns = arr[i];
        }
    }
    return maxAns;  // return max
}
int main(){
    int arr[]={1,2,3,45,6,86};
    int size = 6;

    // fnction calling 
    int minNum = findMinNumber(arr, size);
    cout<<"minimum number in the arr : "<<minNum<<endl;

    int maxNumber = findMaxNumber(arr,size);
    cout<<"maximum number int the array : " <<maxNumber <<endl;
}