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
    int length(ListNode* head)
    {
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }

public:
    ListNode* sortList(ListNode* head) {
        int n = length(head);
        vector<int> arr(n);

        ListNode* temp = head;
        int i=0;
        while(temp!=NULL)
        {
            arr[i] = temp->val;
            temp=temp->next;
            i++;
        }
        sort(arr.begin(), arr.end());

        int a=0;
        ListNode* ans = head;
        while(ans!=NULL)
        {
            ans->val = arr[a];
            ans = ans->next;
            a++;
        }
        return head;
    }
};