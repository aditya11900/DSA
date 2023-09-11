#include<iostream>
using namespace std;
int findingFactorial(int factorial){
    int fact=1;
    for(int i=1; i<=factorial; i++){
        fact= fact*i;
    }
return fact;
}
int main(){
    int num;
    cin>>num;
    int findFactorial = findingFactorial(num);
    cout<<"factorial of "<<num<< " " <<findFactorial;
}