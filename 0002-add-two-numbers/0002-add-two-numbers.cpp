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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* result = dummy;
        int carry = 0;

        while(l1 || l2 || carry != 0)
        {
            int sum1 = carry;

            if(l1 != nullptr)
            {
                sum1 += l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr)
            {
                sum1 += l2->val;
                l2 = l2->next;
            }

            carry = sum1 / 10;
            int digit = sum1 % 10;
            result->next = new ListNode(digit);
            result = result->next;

        }
        ListNode* resultant = dummy->next;
        delete dummy;
        return resultant;
        
    }
};