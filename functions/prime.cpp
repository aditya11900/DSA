#include<iostream>
using namespace std;
bool checkPrime(int num){
    int i =2;
    for(i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    bool isPrime=checkPrime(num);
    if(isPrime){
        cout<<"prime number"<<endl;
    }else{
        cout<<"not a prime number";
    }
}