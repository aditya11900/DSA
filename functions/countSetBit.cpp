#include<iostream>
using namespace std;
int CountSetBit(int num){
    int count = 0;
    while(num>0){
        int bit = num % 2;
    if(bit ==1){
        count++;
    }
    num = num/2;
}
return count;
}
int main(){
int n;
cin>>n;
int totalSetBit = CountSetBit(n);
cout<<"total number of one's in "<<n<<" "<<totalSetBit<<endl;
}