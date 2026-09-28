## Problem: Best Time to Buy and Sell Stock (Easy–Medium)
**Link:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### Approach
We use Kadane's algorithm concept by keeping track of the minimum buy price observed so far (`minPrice`) and updating the maximum profit possible (`maxProfit`) at each step. By iterating through the prices array once, we update `minPrice` whenever a lower price is encountered, or calculate potential profit if selling at the current price.

### Complexity
- Time: O(n) — Single iteration through the array of prices.
- Space: O(1) — Constant extra space used for tracking minimum price and maximum profit.

### Notes
An important edge case is when stock prices strictly decrease over time (e.g., `[7,6,4,3,1]`). In this case, `maxProfit` remains 0, which correctly indicates that no profitable transaction is possible.
