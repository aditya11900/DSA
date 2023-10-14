#include<iostream>
using namespace std;

int factorial(int n){
    //base base kaha runkna hai hume;
    if(n==0||n==1){
        return 1;
    }
    //recursive relation
int recursionAns = factorial(n-1); //factorial kaise nikalte hai 5*4*3*2*1 n*(n-1)*(n-2)*(n-3)....1;

//processing

int finalAns = n * recursionAns;
return finalAns;


}

int main(){
    cout<<factorial(5)<<endl;
    return 0;

}