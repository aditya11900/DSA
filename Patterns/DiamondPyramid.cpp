#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //pyramd  we will combine thee two with one another
    for(int row=0; row<n; row = row+1 ){
        for(int col=0;col< n-row-1 ;col++)
        {
            cout<<" ";
        }
        for(int col=0; col<row+1; col = col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted pyramid
  for(int row=0; row<n; row= row+1){
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        for(int col=0; col<n-row; col++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
}