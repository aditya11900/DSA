#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    arr[4] = 12;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

int main(){
int arr [5] = {19,12,22,32,42};
int n = 5;

//yeh arry phele print ho rahi function call se ishliye ishmai changes nhi hogga 
 cout<<endl<<"printing the array in main "<<endl;
    for(int i = 0; i <5; i++){
        cout<<arr[i]<<" ";
    }

//ab yeh pr function call hua hai jishmai hmne arr[0] ka value change kar liye hai ab jo arry v change ho jayega kyonki base address pass hui hai yeha 
cout<<endl<<"printing the array in function "<<endl;
     printArr(arr,n);

// modification karne ke baad printing ho raha hai array
cout<<endl<<"printing the array after the modification "<<endl;
 for(int i = 0; i <5; i++){
        cout<<arr[i]<<" ";
    }  

}

