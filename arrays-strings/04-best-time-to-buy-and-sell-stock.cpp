#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > minPrice) {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            } else {
                minPrice = prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard case ([7,1,5,3,6,4] -> 5)
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int profit1 = sol.maxProfit(prices1);
    cout << "Test 1 (Standard [7,1,5,3,6,4]): Profit = " << profit1 << " -> ";
    if (profit1 == 5) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Monotonically decreasing ([7,6,4,3,1] -> 0)
    vector<int> prices2 = {7, 6, 4, 3, 1};
    int profit2 = sol.maxProfit(prices2);
    cout << "Test 2 (Decreasing prices [7,6,4,3,1]): Profit = " << profit2 << " -> ";
    if (profit2 == 0) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Single price element [5] -> 0)
    vector<int> prices3 = {5};
    int profit3 = sol.maxProfit(prices3);
    cout << "Test 3 (Single price [5]): Profit = " << profit3 << " -> ";
    if (profit3 == 0) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
