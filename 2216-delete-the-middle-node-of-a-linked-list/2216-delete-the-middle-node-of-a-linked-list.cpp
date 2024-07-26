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
    ListNode* deleteMiddle(ListNode* head) {

        int n = count(head);
        ListNode* temp = head;
        int i = 0;

        while(temp)
        {
            i++;
            if(i == n/2) {
                temp->next = temp->next->next;
                return head;
            }
            temp = temp->next;
        }
        return 0;
    }

    int count(ListNode* head)
    {
        int count = 0;
        ListNode* curr = head;

        while(curr)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }
};