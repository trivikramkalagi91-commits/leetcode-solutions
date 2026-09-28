#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        for (int val : count) {
            if (val != 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard anagram ("anagram", "nagaram" -> true)
    string s1 = "anagram", t1 = "nagaram";
    bool res1 = sol.isAnagram(s1, t1);
    cout << "Test 1 (Standard 'anagram' & 'nagaram'): " << (res1 ? "true" : "false") << " -> ";
    if (res1 == true) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Not an anagram ("rat", "car" -> false)
    string s2 = "rat", t2 = "car";
    bool res2 = sol.isAnagram(s2, t2);
    cout << "Test 2 (Non-anagram 'rat' & 'car'): " << (res2 ? "true" : "false") << " -> ";
    if (res2 == false) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Different lengths "a", "ab" -> false)
    string s3 = "a", t3 = "ab";
    bool res3 = sol.isAnagram(s3, t3);
    cout << "Test 3 (Edge diff lengths 'a' & 'ab'): " << (res3 ? "true" : "false") << " -> ";
    if (res3 == false) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}