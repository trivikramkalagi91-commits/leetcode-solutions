## Problem: Move Zeroes (Easy–Medium)
**Link:** [https://leetcode.com/problems/move-zeroes/](https://leetcode.com/problems/move-zeroes/)

### Approach
We use a two-pointer technique where a `pos` pointer tracks the boundary for non-zero elements. As we iterate through the vector with index `i`, whenever `nums[i]` is non-zero, we swap `nums[pos]` with `nums[i]` and increment `pos`. This guarantees all zeroes are pushed to the right side of the vector in a single pass without extra allocations.

### Complexity
- Time: O(n) — Single pass through the vector of size `n`.
- Space: O(1) — Performed strictly in-place with zero extra memory.

### Notes
Swapping elements directly in-place preserves the relative order of non-zero elements while eliminating the need for a second loop to fill trailing zeroes.
