#include<iostream>
using namespace std;
int findUniqueElement(int arr[], int size){
    int ans = 0;
for(int i =0;i<size;i++){
ans = ans^arr[i];
}
return ans;
}
int main(){
    int arr[]={12,12,13,14,13,14,15};
    int n = 7;
    int uniqueElement = findUniqueElement(arr ,n);
    cout<<"unique element is "<<uniqueElement;

}