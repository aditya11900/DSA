#include<iostream>
#include<vector>
using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;

        int s = 0;
        int e = n - 1;
        int mid = s + (e-s)/2;

        while(s<=e){
            int rowIndex = mid / col;
            int colIndex = mid % col;
            int currNumber = matrix[rowIndex][colIndex];

            if(currNumber == target){
                return true;
            }
            else if(target > currNumber){
                s = mid + 1; 
            }
            else{
                e = mid - 1;  
            }
            //yeha pr fir se galti kar diya yeha pr update karna compulsary hai 
            // yeh galtyi nhi karna hai ishko update karte rhena hai yeh compulsary hai
            mid = s +(e-s)/2;

        }
        return false;
};
int main(){
    //2D matrix ke liye vector<vector<int> ushke baad naam jo v add karna hai 
    // value ke liye vector<vector<int>> matrix = {{1,2,3}, {4,5,6},{7,8,9}}; use karna hotta hai
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6},{7,8,9}};
    int target = 5;
    bool found = searchMatrix(matrix,target);
    if(found){
        cout<<"element is present in the matrix";
    }else{
        cout<<"element is not present in the matrix";
    }

}