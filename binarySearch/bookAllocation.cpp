#include<iostream>
using namespace std;
bool isPossible(int arr[],int size,int student,int mid){
    int StudentCount = 1; // ek student to hogga hi 
    int pageCount = 0; //starting mai page count 0 then hum check karenge ki page count kahi mid se zayda to nhi
    for(int i = 0 ; i<size; i++){
        //agr nhi hai to page count aggin karenge
        if(pageCount + arr[i] <= mid ){
            pageCount += arr[i];
        }
        else{
            //nhi to student count ko increase kar denge
            StudentCount++;
            if(StudentCount > student || arr[i] > mid) // agr student count zayda ho gaya aur arr[i] agr mid se zyada ho gaya to return false kar denge
            {
                return false;
            }
            pageCount =+ arr[i]; // ngi to page count assign kar denge
        }
    }
    return true;
}
int minValue(int arr[],int size, int student){
    int start = 0;
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = start +(end-start)/2;
    int ans = -1;
    while(start<end){
        if(isPossible(arr,size,student,mid)){
            //agr possible hai wo ans to usko store kar lo
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        //mid ko updtae karo fir
        mid = start + (end- start)/2;
    }
return ans;
}
int main(){
    int book[]={12,34,67,90};
    int size = sizeof(book)/sizeof(int);
    int student = 2;
    int MinVal = minValue(book,size,student);
    cout<<MinVal<<endl;
}