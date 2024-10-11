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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int total = 1;

        while (temp->next != NULL) {
            total++;
            temp = temp->next;
        }

        int target = total - n;
        ListNode* curr = head;
        if (head == NULL)
            return NULL;
        if(target==0) return head->next;
        while (curr != NULL) {
            target--;
            if (target == 0) {
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
        }
        return head;
    }
};