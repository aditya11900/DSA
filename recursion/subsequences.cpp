#include<iostream>
using namespace std;
void findSubsequences(string str, string output, int index){
//base case
if(index >= str.length()){
    cout<<"->"<<output<<endl;
    return; // v karna hotta hai ishliye error aa rha tha
}
char ch = str[index];
//exclude ke liye code
findSubsequences(str,output,index+1);
//include
//ush se phele ans ko store v karna hogga
output.push_back(ch);

findSubsequences(str,output,index+1);

}
int main(){
    string str = "abc";
    string output = " ";
    int index = 0;
    findSubsequences(str, output, index);
    return 0;
}