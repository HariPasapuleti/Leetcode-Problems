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
        if (head == NULL||head->next==NULL)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* del = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast && fast->next)
                del = slow;
        }
        del->next = del->next->next;
        return head;
    }
};