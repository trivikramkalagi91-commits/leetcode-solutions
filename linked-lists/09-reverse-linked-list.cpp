#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};

// Helper functions for testing
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < values.size(); i++) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
    }
    return head;
}

vector<int> linkedListToVector(ListNode* head) {
    vector<int> result;
    while (head != nullptr) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

int main() {
    Solution sol;

    // Test Case 1: Standard List (1->2->3->4->5 -> 5->4->3->2->1)
    ListNode* head1 = createLinkedList({1, 2, 3, 4, 5});
    ListNode* rev1 = sol.reverseList(head1);
    vector<int> res1 = linkedListToVector(rev1);
    cout << "Test 1 (Standard 1->2->3->4->5): ";
    for (size_t i = 0; i < res1.size(); i++) cout << res1[i] << (i + 1 < res1.size() ? "->" : "");
    cout << " -> ";
    vector<int> expected1 = {5, 4, 3, 2, 1};
    if (res1 == expected1) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 2: Edge Case (Single node list 1 -> 1)
    ListNode* head2 = createLinkedList({1});
    ListNode* rev2 = sol.reverseList(head2);
    vector<int> res2 = linkedListToVector(rev2);
    cout << "Test 2 (Single node 1): ";
    for (size_t i = 0; i < res2.size(); i++) cout << res2[i] << (i + 1 < res2.size() ? "->" : "");
    cout << " -> ";
    vector<int> expected2 = {1};
    if (res2 == expected2) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    // Test Case 3: Edge Case (Empty list -> Empty list)
    ListNode* head3 = createLinkedList({});
    ListNode* rev3 = sol.reverseList(head3);
    vector<int> res3 = linkedListToVector(rev3);
    cout << "Test 3 (Empty list): " << (res3.empty() ? "empty" : "non-empty") << " -> ";
    if (res3.empty()) cout << "PASSED" << endl;
    else cout << "FAILED" << endl;

    return 0;
}
