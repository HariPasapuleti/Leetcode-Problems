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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> vec;
        for(int i=0;i<lists.size();i++) {
            ListNode* temp=lists[i];
            while(temp!=nullptr) {
                int data = temp->val;
                vec.push_back(data);
                temp=temp->next;
            }
        }

        sort(vec.begin(), vec.end());
        ListNode* res=new ListNode(0);
        ListNode* temp=res;
        for(int i=0;i<vec.size();i++) {
            ListNode* data = new ListNode(vec[i]);
            temp->next=data;
            temp=temp->next;
        }
        return res->next;
        
    }
};