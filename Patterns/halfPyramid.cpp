#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){ // if col = 0 then you have to increase it to col<row+1;
        cout<<"*";
    }
    cout<<endl;
}
}