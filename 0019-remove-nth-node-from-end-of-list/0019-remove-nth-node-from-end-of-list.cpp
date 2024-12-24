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

        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* first=dummy;
        ListNode* second=dummy;
        for(int i=0;i<=n;i++) {
            first=first->next;
        }
        while(first!=NULL) {
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return dummy->next;
        // ListNode* rev = reverse(head);
        // if (n == 1)
        //     return reverse(rev->next);
        // ListNode* temp1 = rev;
        // while (temp1) {
        //     n--;
        //     if (n == 1)
        //         temp1->next = temp1->next->next;
        //     else
        //         temp1 = temp1->next;
        // }
        // return reverse(rev);
    }

    // ListNode* reverse(ListNode* head) {
    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
    //     ListNode* temp = head;
    //     while (temp) {
    //         temp = temp->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = temp;
    //     }
    //     return prev;
    // }
};