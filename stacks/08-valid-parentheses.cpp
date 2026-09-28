#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;

    // Test Case 1: Standard valid ("()[]{}" -> true)
    string s1 = "()[]{}";
    bool res1 = sol.isValid(s1);
    cout << "Test 1 (Standard '()[]{}'): " << (res1 ? "true" : "false") << " -> ";
    if (res1 == true) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Mismatched closing ("(]" -> false)
    string s2 = "(]";
    bool res2 = sol.isValid(s2);
    cout << "Test 2 (Mismatched '(]'): " << (res2 ? "true" : "false") << " -> ";
    if (res2 == false) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Unmatched single opening "(" -> false)
    string s3 = "(";
    bool res3 = sol.isValid(s3);
    cout << "Test 3 (Single opening '('): " << (res3 ? "true" : "false") << " -> ";
    if (res3 == false) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
