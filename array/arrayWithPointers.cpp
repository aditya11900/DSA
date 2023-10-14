#include<iostream>
using namespace std;
int main(){
    
int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int (*ptr)[10] = &nums; // pointer to an array of 10 integers

// accessing elements of the array using pointer notation

cout << (*ptr)[0] << endl; // prints 1

cout << (*ptr)[1] << endl; // prints 2

cout << (*ptr)[2] << endl; // prints 3
}