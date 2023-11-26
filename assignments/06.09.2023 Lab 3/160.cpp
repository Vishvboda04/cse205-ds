160. Intersection of Two Linked Lists

Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

For example, the following two linked lists begin to intersect at node c1:

**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
int length(ListNode*head)
{
    ListNode* temp = head;
    int count=0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = length(headA);
        int b = length(headB);
        int s;

        if(a>b)
        {
            s = a-b;
            while(s!=0)
            {
                headA = headA->next;
                s--;
            } 
        }
        else if(b>a)
        {
            s = b-a;
            while(s!=0)
            {
                headB = headB->next;
                s--;
            } 
        }

        while(headA != NULL)
        {
            if(headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};