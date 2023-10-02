#include<iostream>
#include<vector>
using namespace std; 
int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=0;
        while(i<nums.size()){
            if(nums[i]==nums[j])
            {
                i++;
            }else{
                nums[++j]=nums[i++];
            }
        }
        return j+1;
    }
int main(){
 vector<int> arr ={1,1,2,3,4,5,5,6,6};
 int ans = removeDuplicates(arr);

 for (int i = 0; i < ans; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}