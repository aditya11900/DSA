#include<iostream>
using namespace std;
int main(){

int* arr[3]; // array of pointers to int

int nums[3] = {1, 2, 3};

int* ptr = nums; // pointer to int (points to the first element of nums)

// assigning pointers to elements in the array of pointers

arr[0] = &nums[0];

arr[1] = &nums[1];

arr[2] = &nums[2]; // accessing elements using array notation

cout << *arr[0] << endl; // prints 1

cout << *arr[1] << endl; // prints 2

cout << *arr[2] << endl; // prints 3

// accessing elements using pointer notation

cout << *ptr << endl; // prints 1

cout << *(ptr + 1) << endl; // prints 2

cout << *(ptr + 2) << endl; // prints 3
}