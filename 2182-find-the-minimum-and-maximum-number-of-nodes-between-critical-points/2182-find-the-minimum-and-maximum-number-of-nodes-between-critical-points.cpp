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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) return {-1, -1};

        ListNode* temp = head->next;
        ListNode* prev = head;
        vector<int> critical_point_arr;
        int position_count = 1;
        
        while(temp != nullptr && temp->next != nullptr) {
            if((temp->val > prev->val && temp->val > temp->next->val) || (temp->val < prev->val && temp->val < temp->next->val)) {
                critical_point_arr.push_back(position_count);
            }
            prev = temp;
            temp = temp->next;
            position_count++;
        }
        
        if(critical_point_arr.size() < 2) return {-1, -1};
        
        int min_dist = INT_MAX;
        for(int i = 1; i < critical_point_arr.size(); i++) {
            min_dist = min(min_dist, critical_point_arr[i] - critical_point_arr[i - 1]);
        }
        
        int max_dist = critical_point_arr.back() - critical_point_arr.front();
        
        return {min_dist, max_dist};
    }
};
