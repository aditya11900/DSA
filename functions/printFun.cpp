#include<iostream>
using namespace std;
void printName(){
    int n;
    cout<<"enter how many times do you want to print"<<endl;
    cin>>n;
    for(int i=0; i<5; i++){
        cout<<"Aditya"<<endl;
    }
}
int main(){
    //Function call
    //it will go at line no 3 and after that it will exectute and retur to int main
    printName();
}