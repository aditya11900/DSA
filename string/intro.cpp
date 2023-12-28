#include<iostream>
#include<cstring> // Include the <cstring> header for strlen()
using namespace std;
int findLength(char ch[], int size){
    int len = 0;
    for(int i = 0; i<size;i++){
        if(ch[i]=='\0') // jab tak  char ka index null ke equal nhi hogga tab tak len ko increase karenge
        {
            break;
        }else{
            len++;
        }
    }
    return len;
}
int main(){
    // char ch[100]; //initilize
    // cin>>ch;
    // cout<<ch;

    //for space and tab we should use getline

    char geth[100];
    cin.getline(geth, 100); // provide the missing arguments
    cout<<geth<<endl;

    int len = findLength(geth, 100);

    cout<<"another way finding length"<<len<<endl;

    cout<<"length of geth: "<<strlen(geth); // Fix the issue by using strlen(geth)

}