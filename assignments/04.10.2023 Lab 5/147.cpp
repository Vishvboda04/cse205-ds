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
    ListNode* insertionSortList(ListNode* head) {
        
        if(!head->next) return head;

        ListNode* sorted = new ListNode();
        ListNode* ptr = sorted;  

        ptr->next = new ListNode(head->val);
        ptr = ptr->next; 

        head = head->next;

        while(head){
            if(head->val > ptr->val){
                ptr->next = new ListNode(head->val);
                ptr = ptr->next;
            }
            else{
                ListNode* pre = sorted;
                ListNode* curr = sorted->next;

                while(curr){
                    if(curr->val >= head->val){
                        pre->next = new ListNode(head->val);
                        pre->next->next = curr;
                        break;
                    }
                    pre = curr;
                    curr = curr->next;
                }
            }
            head = head->next;
        }
        return sorted->next;
    }
};