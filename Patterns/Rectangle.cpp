#include<iostream>
using namespace std;
int main(){
    //outer loop for row 
    for(int row = 0; row<5; row++){
        for(int col=0; col<5; col++){ //inner loop for column 
            cout<<"*"; // print * for 0-4 times
        }
        cout<<endl; //new line
    }
}