## Problem: Valid Anagram (Easy)
**Link:** [https://leetcode.com/problems/valid-anagram/](https://leetcode.com/problems/valid-anagram/)

### Approach
We maintain a fixed-size frequency array of size 26 for lowercase English letters. First, we verify that both strings have equal length. Then, we iterate through both strings simultaneously, incrementing the character count for string `s` and decrementing for string `t`. Finally, we verify that all frequency counts equal zero.

### Complexity
- Time: O(n) — A single pass over the strings of length `n` followed by iterating through a 26-element array.
- Space: O(1) — A constant array of size 26 is used regardless of the input string lengths.

### Notes
While sorting both strings yields an O(n log n) solution, the frequency counter approach achieves linear O(n) time. If inputs include full Unicode characters, `std::unordered_map<char, int>` can be used instead of a fixed 26-element array.
