#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP = 0;
        int pickM = 0;
        int pickG = 0;

        int travelP = 0;
        int travelG = 0;
        int travelM = 0;

        int lastP = 0;
        int lastG = 0;
        int lastM = 0;

        // Process each garbage entry
        for (int i = 0; i < garbage.size(); i++) {
            string curr = garbage[i];

            for (int j = 0; j < curr.length(); j++) {
                char ch = curr[j];
                if (ch == 'P') {
                    pickP++;
                    lastP = i;
                } else if (ch == 'G') {
                    pickG++;
                    lastG = i;
                } else {
                    pickM++;
                    lastM = i;
                }
            }
        }

        // Calculate travel distances
        for (int i = 0; i < lastP; i++) {
            travelP += travel[i];
        }
        for (int i = 0; i < lastG; i++) {
            travelG += travel[i];
        }
        for (int i = 0; i < lastM; i++) {
            travelM += travel[i];
        }

        // Calculate total garbage collected
        int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
        return ans;
    }
};

int main() {
    Solution sol;

    // Example data
    vector<string> garbage = {"PGM", "GGM", "PPPP", "M"};
    vector<int> travel = {10, 20, 5, 15};

    // Test the function
    int result = sol.garbageCollection(garbage, travel);

    // Display the result
    cout << "Total garbage collected: " << result << endl;

    return 0;
}
