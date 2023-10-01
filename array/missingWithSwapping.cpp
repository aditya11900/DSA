#include<iostream>
#include<cmath>
using namespace std;

void findMissing(int *a, int n){
    int i = 0;
    while(i<n){
        int index = a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i] , a[index]);
        }
        else{
            i++;
        }
    }
    //print the array after sorting and swapping to thir respective place
    for(int i= 0; i<n ; i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        if(a[i] != i+1)
        cout<<i+1;
    }
}

int main(){
    int n;
    int a[] ={1,3,3,5,4};
    n = sizeof(a)/sizeof(int);
    findMissing(a , n);
    return 0;
}