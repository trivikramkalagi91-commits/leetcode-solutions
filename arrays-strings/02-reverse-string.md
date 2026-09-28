## Problem: Reverse String (Easy)
**Link:** [https://leetcode.com/problems/reverse-string/](https://leetcode.com/problems/reverse-string/)

### Approach
We use a two-pointer approach starting at opposite ends of the character vector (`left` at index 0 and `right` at index `n - 1`). In each iteration of the loop, we swap the characters at `left` and `right` and increment `left` while decrementing `right` until the two pointers meet in the middle.

### Complexity
- Time: O(n) — We perform `n / 2` swaps, which executes in linear time proportional to the length of the string.
- Space: O(1) — Reversing is performed strictly in-place using constant auxiliary memory.

### Notes
A key edge case is single-character strings or empty inputs, where `left >= right` immediately terminates the loop without performing unnecessary operations.
