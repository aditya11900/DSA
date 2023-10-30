#include<iostream>
#include<limits.h>
using namespace std;
void findMini(int arr[],int size, int index, int &mini){ // yha pr mini ko pass by value nahi reference pass karna hai 
    //base case
    if(index>=size){
        return;
    }
    //processing
    mini = min(arr[index], mini);
    //recursive call

    findMini(arr,size,index+1,mini);
}
int main(){
    int arr[] ={10,20,30,40,50};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    findMini(arr,size,index,mini);
    cout<<mini<<endl;
}