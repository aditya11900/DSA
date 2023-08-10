#include<iostream>
using namespace std;
int SumOfNumbers(int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter n till you want to print sum:"<<endl;
    cin>>n;
    int result = SumOfNumbers(n);
    cout<<result;
}