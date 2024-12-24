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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* part1 = rev(slow);
        ListNode* temp2 = part1;
        ListNode* temp1 = head;
        while (temp2) {
            if (temp1->val != temp2->val)
                return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }

    ListNode* rev(ListNode* slow) {
        ListNode* prev = NULL;
        ListNode* curr = slow;
        ListNode* temp = slow;
        while (curr) {
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};