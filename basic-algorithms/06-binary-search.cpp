#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Target present in array ([-1,0,3,5,9,12], target 9 -> index 4)
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    int idx1 = sol.search(nums1, target1);
    cout << "Test 1 (Target 9 in [-1,0,3,5,9,12]): Index = " << idx1 << " -> ";
    if (idx1 == 4) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Target absent ([-1,0,3,5,9,12], target 2 -> -1)
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    int idx2 = sol.search(nums2, target2);
    cout << "Test 2 (Target 2 absent in [-1,0,3,5,9,12]): Index = " << idx2 << " -> ";
    if (idx2 == -1) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Single element array [5], target 5 -> 0)
    vector<int> nums3 = {5};
    int target3 = 5;
    int idx3 = sol.search(nums3, target3);
    cout << "Test 3 (Single element [5], target 5): Index = " << idx3 << " -> ";
    if (idx3 == 0) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
