// 237. Delete Node in a Linked List
// you are given access to that node only not to head

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* copy = node->next;
        node->next = node->next->next;
        delete(copy);
    }
};