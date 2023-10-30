#include<iostream>
using namespace std;
void printOccurance(int arr[],int size,int index, int target){
    //base case kya hogga jab hm puri array transverse kar jayenge
    if(index>=size){
        return ;
    }
    //processing 
    if(arr[index]== target){
        cout<<index<<" ";
    }
    //recursive call aage recursion sambhal lega
printOccurance(arr,size,index+1,target);

}
int main(){
    int arr[]={10,10,20,40,10};
    int size = 5;
    int target = 10;
    int index = 0;
printOccurance(arr,size,index,target);

return 0;
}