#include<iostream>
using namespace std;

int findLength(char ch[], int size) {
    int index = 0;
    while(index < size && ch[index] != '\0') {
        index++;
    }
    return index;
}

void reverseString(char ch[], int size) {
    int start = 0;
    int end = size - 1;
    while(start <= end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

int main() {
    char ch[100];
    cin.getline(ch, 100);
    cout << "Printing ch before reverse: " << ch << endl;

    int len = findLength(ch, 100);
    reverseString(ch, len);

    cout << "After reversing: " << ch;
    return 0;
}