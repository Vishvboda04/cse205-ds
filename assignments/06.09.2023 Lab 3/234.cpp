// 234. Palindrome Linked List

// Given the head of a singly linked list, return true if it is a 
// palindrome or false otherwise.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //1. find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast= fast->next->next;
        }
        //slow is at middle

        //2. break from middle
        ListNode* curr = slow->next;
        ListNode* prev = slow;
        slow->next = NULL;
        
        //3. reverse 2nd list
        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        //4. equal lists
        ListNode* head1 = head;
        ListNode* head2 = prev;

        while(head2)
        {
            if(head1->val != head2->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};