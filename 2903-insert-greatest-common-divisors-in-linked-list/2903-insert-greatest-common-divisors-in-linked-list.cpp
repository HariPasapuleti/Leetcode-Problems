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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* curr = head;

        while (curr->next != NULL) {
            int a = curr->val, b = curr->next->val;
            int temp = gcd(a, b);
            ListNode* newNode = new ListNode(temp);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = curr->next->next;
        }
        return head;
    }
};