#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard Case
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "Test 1 (Standard [2,7,11,15], target 9): [" << result1[0] << ", " << result1[1] << "] -> ";
    if (result1.size() == 2 && result1[0] == 0 && result1[1] == 1) {
        cout << "PASSED" << endl;
    } else {
        cout << "FAILED" << endl;
    }

    // Test Case 2: Edge Case (Duplicate numbers / target formed by same value at different indices)
    vector<int> nums2 = {3, 3};
    int target2 = 6;
    vector<int> result2 = sol.twoSum(nums2, target2);
    cout << "Test 2 (Edge [3,3], target 6): [" << result2[0] << ", " << result2[1] << "] -> ";
    if (result2.size() == 2 && result2[0] == 0 && result2[1] == 1) {
        cout << "PASSED" << endl;
    } else {
        cout << "FAILED" << endl;
    }

    // Test Case 3: Negative numbers
    vector<int> nums3 = {-3, 4, 3, 90};
    int target3 = 0;
    vector<int> result3 = sol.twoSum(nums3, target3);
    cout << "Test 3 (Negative numbers [-3,4,3,90], target 0): [" << result3[0] << ", " << result3[1] << "] -> ";
    if (result3.size() == 2 && result3[0] == 0 && result3[1] == 2) {
        cout << "PASSED" << endl;
    } else {
        cout << "FAILED" << endl;
    }

    return 0;
}
