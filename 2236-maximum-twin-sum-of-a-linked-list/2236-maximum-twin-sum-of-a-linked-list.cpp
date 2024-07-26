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
    int pairSum(ListNode* head) {

        if(!head->next->next) {
            return head->val + head->next->val;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        // ListNode* prev = nullptr;

        while(fast && fast->next)
        {
            // prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // prev->next = NULL;
        slow = reverse(slow);
        int twinSum = -1;

        while(slow)
        {
            twinSum = max(twinSum, head->val + slow->val);
            head = head->next;
            slow = slow->next;
        }
        return twinSum;
        
    }

    ListNode* reverse(ListNode* head)
    {
        if(!head || !head->next) {
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* front = temp;

        while(temp)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }
};