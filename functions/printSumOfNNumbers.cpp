#include<iostream>
using namespace std;

int SumOfNumbers(int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + i;
    }
    return sum;
}

int evenNaturalNumbers(int n){
    int sum = 0;
    for(int i = 2; i <= n; i = i + 2){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter n till you want to calculate the sum: " << endl;
    cin >> n;

    int naturalSum = evenNaturalNumbers(n);
    int totalSum = SumOfNumbers(n);

    cout << "Sum of numbers from 0 to " << n - 1 << ": " << totalSum << endl;
    cout << "Sum of even natural numbers from 2 to " << n << ": " << naturalSum << endl;

    return 0;
}