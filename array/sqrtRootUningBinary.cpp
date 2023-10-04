#include<iostream>
using namespace std;
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long int mid = start+(end-start)/2;
        int ans = -1;
        while(start <= end){
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid < x){
                ans = mid;
                start = start + 1;
            }
            else{
                end = end - 1;
            }
            //update karna bhul jaate hai yehi galti hai to update karo
            mid = start + (end - start)/2;
        }
        return ans;
    };
    int main(){
        int n;
        cin>>n;
        long long int sqrtOfnum = mySqrt(n);
        cout<<"sqrt of number : "<<n<< " is "<<sqrtOfnum;

    }