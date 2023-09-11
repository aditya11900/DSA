#include<iostream>
using namespace std;
bool isEvenOdd(int evenOdd){
    //normal method
// if(evenOdd%2==0){
//     return true;
// }else{
//     return false;
// }
//bitWise
if((evenOdd & 1)==0){
    return true;
}
else {
    return false;
}
}
int main(){
    int num;
    cin>>num;
    bool isEven = isEvenOdd(num);
    if(isEven){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"number is Odd"<<endl;
    }
}