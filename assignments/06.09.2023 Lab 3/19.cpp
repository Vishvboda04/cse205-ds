// 19. Remove Nth Node From End of List
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
private:
    int getlength(ListNode* head)
    {
    ListNode* temp = head;
    int length = 0;

    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getlength(head);
        int point = len - n;

        while(point == 0)
        {
            ListNode* ptr = head;
            head = head->next; 
            delete ptr;
            return head;
        }

        ListNode* temp = head;
        for(int i=0; i<point-1; i++)
        {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};