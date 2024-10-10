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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* temp=head;
        ListNode* curr=head;

        while(temp->next!=NULL)
        {
            int sum=0;
            temp=temp->next;

            while(temp->val!=0)
            {
                sum+=temp->val;
                temp=temp->next;
            }

            if(curr!=NULL) {
                curr->next=new ListNode(sum);
                curr=curr->next;
            }
            else curr=new ListNode(sum);

            // cout << curr->val << endl;
        }
        return head->next;
    }
};