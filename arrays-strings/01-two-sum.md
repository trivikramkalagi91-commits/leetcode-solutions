## Problem: Two Sum (Easy)
**Link:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)

### Approach
We use a single-pass hash map (`std::unordered_map`) to store each element's value along with its index. As we iterate through the array, we calculate the required complement (`target - current_value`) and check if it already exists in the map. If found, we return the pair of indices immediately; otherwise, we insert the current element and its index into the hash map.

### Complexity
- Time: O(n) — We traverse the list of `n` elements exactly once. Each lookup in the hash table costs O(1) average time.
- Space: O(n) — The extra space required depends on the number of items stored in the hash table, which stores at most `n` elements.

### Notes
Handling duplicate elements (e.g., `[3, 3]` with target `6`) is a classic edge case. Checking for the complement before inserting the current element into the hash map prevents overwriting indices prematurely and cleanly resolves pairs of duplicate numbers.
