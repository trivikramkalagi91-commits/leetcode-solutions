## Problem: Longest Common Prefix (Easy–Medium)
**Link:** [https://leetcode.com/problems/longest-common-prefix/](https://leetcode.com/problems/longest-common-prefix/)

### Approach
We initialize the candidate prefix as the first string in the vector. We then iterate through the remaining strings, comparing characters index by index with the current prefix. If a mismatch or boundary is reached, we shrink the prefix accordingly. If the prefix becomes empty at any point, we return immediately.

### Complexity
- Time: O(S) — where `S` is the total sum of all characters in all strings in the input array.
- Space: O(1) — Constant auxiliary space used (excluding space for the returned string result).

### Notes
Edge cases include empty arrays, single-element vectors, and cases where strings have no common starting character. Early termination when `prefix == ""` speeds up execution considerably.
