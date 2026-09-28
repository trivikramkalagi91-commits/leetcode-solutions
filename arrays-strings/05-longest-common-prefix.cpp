#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) break;
        }
        return prefix;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard common prefix ("flower","flow","flight" -> "fl")
    vector<string> strs1 = {"flower", "flow", "flight"};
    string res1 = sol.longestCommonPrefix(strs1);
    cout << "Test 1 (Standard ['flower','flow','flight']): \"" << res1 << "\" -> ";
    if (res1 == "fl") cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: No common prefix ("dog","racecar","car" -> "")
    vector<string> strs2 = {"dog", "racecar", "car"};
    string res2 = sol.longestCommonPrefix(strs2);
    cout << "Test 2 (No prefix ['dog','racecar','car']): \"" << res2 << "\" -> ";
    if (res2 == "") cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Single string ["single"] -> "single")
    vector<string> strs3 = {"single"};
    string res3 = sol.longestCommonPrefix(strs3);
    cout << "Test 3 (Single element ['single']): \"" << res3 << "\" -> ";
    if (res3 == "single") cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
