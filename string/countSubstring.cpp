#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int expand(string s, size_t i, size_t j){
        int count = 0;
        while(i < s.length() && j < s.length() && s[i] == s[j]){
            i--;
            j++;
            count++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        for(size_t center = 0; center < s.length(); center++){
            int oddKaAns = expand(s, center, center);
            int evenKaAns = expand(s, center, center + 1);
            
            totalCount += oddKaAns + evenKaAns;
        }
        return totalCount;
    }
};

int main() {
    Solution sol;
    string input = "aaa";
    int result = sol.countSubstrings(input);
    cout << "Number of palindromic substrings: " << result << endl;

    return 0;

//for function
    // string input = "abc";
    // int result = countSubstrings(input);
    // cout << "Number of palindromic substrings: " << result << endl;

    // return 0;
}
