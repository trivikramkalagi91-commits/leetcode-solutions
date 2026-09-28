#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[pos], nums[i]);
                pos++;
            }
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard case ([0,1,0,3,12] -> [1,3,12,0,0])
    vector<int> nums1 = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums1);
    cout << "Test 1 (Standard [0,1,0,3,12]): [";
    for (int i = 0; i < nums1.size(); i++) cout << nums1[i] << (i + 1 < nums1.size() ? "," : "");
    cout << "] -> ";
    vector<int> expected1 = {1, 3, 12, 0, 0};
    if (nums1 == expected1) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Edge case (Single element [0] -> [0])
    vector<int> nums2 = {0};
    sol.moveZeroes(nums2);
    cout << "Test 2 (Single element [0]): [";
    for (int i = 0; i < nums2.size(); i++) cout << nums2[i] << (i + 1 < nums2.size() ? "," : "");
    cout << "] -> ";
    vector<int> expected2 = {0};
    if (nums2 == expected2) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: No zeroes ([1,2,3] -> [1,2,3])
    vector<int> nums3 = {1, 2, 3};
    sol.moveZeroes(nums3);
    cout << "Test 3 (No zeroes [1,2,3]): [";
    for (int i = 0; i < nums3.size(); i++) cout << nums3[i] << (i + 1 < nums3.size() ? "," : "");
    cout << "] -> ";
    vector<int> expected3 = {1, 2, 3};
    if (nums3 == expected3) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
