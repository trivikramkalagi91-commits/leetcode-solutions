#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case ("hello" -> "olleh")
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s1);
    cout << "Test 1 (Standard 'hello'): ";
    for (char c : s1) cout << c;
    cout << " -> ";
    vector<char> expected1 = {'o', 'l', 'l', 'e', 'h'};
    if (s1 == expected1) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Edge case (Single element 'a')
    vector<char> s2 = {'a'};
    sol.reverseString(s2);
    cout << "Test 2 (Edge single char 'a'): ";
    for (char c : s2) cout << c;
    cout << " -> ";
    vector<char> expected2 = {'a'};
    if (s2 == expected2) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Even length string ("Hannah" -> "hannaH")
    vector<char> s3 = {'H', 'a', 'n', 'n', 'a', 'h'};
    sol.reverseString(s3);
    cout << "Test 3 (Even length 'Hannah'): ";
    for (char c : s3) cout << c;
    cout << " -> ";
    vector<char> expected3 = {'h', 'a', 'n', 'n', 'a', 'H'};
    if (s3 == expected3) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}