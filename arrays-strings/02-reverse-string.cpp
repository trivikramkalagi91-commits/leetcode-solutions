#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while (l<r) {
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
    }
};

int main() {
    Solution sol;
    
    vector<char> s1 ={'h','e','l','l','o'};
    sol.reverseString(s1);
    cout <<"Test 1 Output: ";
    for(char c : s1) cout << c;
    cout << endl; 

    vector<char> s2 = {'a'};
    sol.reverseString(s2);
    cout << "Test 2 Output: ";
    for(char c : s2) cout << c;
    cout << endl;

    return 0;
}