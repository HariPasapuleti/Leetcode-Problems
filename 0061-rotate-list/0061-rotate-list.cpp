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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head)
            return head;
        ListNode* temp = head;
        ListNode* curr = head;
        int count = 1;
        while (temp->next != NULL) {
            count++;
            temp = temp->next;
        }
        k = k % count;
        if (k == 0)
            return head;
        for (int i = 0; i < count - k - 1; i++) {
            curr = curr->next;
        }
        ListNode* newHead = curr->next;
        curr->next = NULL;
        temp->next = head;
        return newHead;
    }
};