## Problem: Valid Parentheses (Easy–Medium)
**Link:** [https://leetcode.com/problems/valid-parentheses/](https://leetcode.com/problems/valid-parentheses/)

### Status
> [!NOTE]
> **Topic Not Taught Yet in Class:** Stacks data structure has not been formally introduced in lectures yet. The solution and local test harness are included for self-learning and local verification.

### Approach
We use a Last-In, First-Out (LIFO) stack (`std::stack<char>`) to track opening brackets (`'('`, `'{'`, `'['`). When a closing bracket is encountered, we check if the stack is non-empty and whether the top element matches the corresponding opening bracket type. If it matches, we pop the top element; otherwise, the string is invalid. Finally, the string is valid if the stack is completely empty.

### Complexity
- Time: O(n) — We inspect each character of the string of length `n` exactly once.
- Space: O(n) — In the worst-case (e.g. `"((((("`), the stack stores up to `n` characters.

### Notes
Edge cases include strings with an odd number of characters, strings starting with closing brackets, or strings leaving unclosed opening brackets in the stack.
