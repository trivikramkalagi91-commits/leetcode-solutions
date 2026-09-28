## Problem: Reverse Linked List (Easy–Medium)
**Link:** [https://leetcode.com/problems/reverse-linked-list/](https://leetcode.com/problems/reverse-linked-list/)

### Approach
We reverse the linked list iteratively using three pointers: `prev` initialized to `nullptr`, `curr` initialized to `head`, and `nextTemp`. In each step, we save `curr->next` in `nextTemp`, point `curr->next` backwards to `prev`, advance `prev` to `curr`, and advance `curr` to `nextTemp`. When `curr` becomes `nullptr`, `prev` points to the new head of the reversed list.

### Complexity
- Time: O(n) — Single traversal of the linked list containing `n` nodes.
- Space: O(1) — Reversal is performed in-place with constant extra memory.

### Notes
Handling empty linked lists (`head == nullptr`) and single-node lists (`head->next == nullptr`) gracefully without dereferencing null pointers is essential.
