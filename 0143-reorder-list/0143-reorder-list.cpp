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
    void reorderList(ListNode* head) {

        if(head == nullptr) return;

        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *curr = slow, *temp = NULL, *prev = NULL;
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode *first = head, *second = prev;
        ListNode *temp1, *temp2;
        while (second->next != nullptr) {
            temp1 = first->next;
            temp2 = second->next;
            first->next = second;
            first = temp1;
            second->next = first;
            second = temp2;
        }
    }
};