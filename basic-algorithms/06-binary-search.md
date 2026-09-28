## Problem: Binary Search (Easy–Medium)
**Link:** [https://leetcode.com/problems/binary-search/](https://leetcode.com/problems/binary-search/)

### Approach
We maintain two pointers `left` and `right` bounding the active search range of a sorted integer vector. At each iteration, we calculate `mid = left + (right - left) / 2`. If `nums[mid]` equals `target`, we return `mid`. If `nums[mid] < target`, we eliminate the left half by setting `left = mid + 1`; otherwise, we set `right = mid - 1`.

### Complexity
- Time: O(log n) — The search space is halved in each step.
- Space: O(1) — Constant memory is required for pointer storage.

### Notes
Calculating `mid` as `left + (right - left) / 2` avoids potential integer overflow issues present in `(left + right) / 2` when dealing with very large indices.
