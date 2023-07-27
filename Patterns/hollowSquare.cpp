#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row = 0; row<n; row++){
        for(int col =0; col<n; col++){
            if(row==0 || row==n-1 || col==0 || col==n-1){ //row==0 || row==n-1 it will print only rows for col col==0 || col==n-1 now it will print col also 
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}