// 21. Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyhead = new ListNode(-1);
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* ptr3 = dummyhead;

        while(ptr1!= NULL && ptr2!= NULL)
        {
            if(ptr1->val >ptr2->val)
            {
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
            else
            {
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
            }
            ptr3 = ptr3->next;
        }
        if(ptr1==NULL)
        {
            ptr3->next = ptr2;
        }
        else
        {
            ptr3->next = ptr1;
        }
        return dummyhead->next;

    }
};