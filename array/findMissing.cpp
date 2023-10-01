#include<iostream>
#include<cmath>
using namespace std;

void findMissing(int *a, int n){
    for(int i = 0; i<n; i++){
        int index = abs(a[i]); // assignig the value present at the index
            if(a[index - 1] > 0){ // checking that if greater than 
                a[index -1] *= -1; // mark it with -1;
            }
    }
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<n; i++){
        if(a[i]> 0)
        cout<<"The left number at the index which is left is the missing number which is: "<<i+1;
    }
}

int main(){
    int n;
    int a[] ={1,3,3,3,3};
    n = sizeof(a)/sizeof(int);
    findMissing(a , n);
    return 0;
}