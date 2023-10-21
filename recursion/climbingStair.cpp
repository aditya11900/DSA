#include<iostream>
using namespace std;
int climbStair(int n){
//base case kya hai yeh base case wo hai jaha hume runkna hai 
if(n==1){ // 1 ke liye mere pass ek case hai 
return 1;
}
if(n==2){ // 2 stairs ke liye mere pass 2 raste hai ya to 2 ya to 1 1 kar ke 
    return 2;
}
int ans = climbStair(n-1) + climbStair(n-2);
return ans;
}
int main(){
int n;
cout<<"enter the number of stairs ";
cin>>n;
int ways = climbStair(n);
cout<<"there are "<< ways <<" "<<" ways to climb "<<n<<" stairs";
return 0;
}