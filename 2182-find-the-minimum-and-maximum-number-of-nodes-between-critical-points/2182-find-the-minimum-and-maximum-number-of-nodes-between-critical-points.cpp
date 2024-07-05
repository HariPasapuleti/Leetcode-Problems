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

        ListNode* temp = head;
        ListNode* prev = head;
        temp = temp->next;
        // prev = prev->next;
        vector<int> critical_point_arr;
        // vector<int> resultant;
        int position_count = 1;
        if (!head || !head->next || !head->next->next) return {-1, -1};

        while(temp != nullptr && temp->next != nullptr)
        {
            if((temp->next->val > temp->val && prev->val > temp->val) || (temp->next->val < temp->val && prev->val < temp->val))
            {
                critical_point_arr.push_back(position_count);
            }
            prev = temp;
            temp = temp->next;
            
            position_count++;
        }
        // if(position_count < 3) return '[-1, -1]';
        if(critical_point_arr.size() < 2) return {-1, -1};

        // int min = critical_point_arr[critical_point_arr.size() - 1] - critical_point_arr[critical_point_arr.size() - 2];
        // int max = critical_point_arr[critical_point_arr.size() - 1] - critical_point_arr[0];
        // // resultant.push_back(min);
        // // resultant.push_back(max);

        // return {min, max};
        int min_dist = INT_MAX;
        for(int i = 1; i < critical_point_arr.size(); i++) {
            min_dist = min(min_dist, critical_point_arr[i] - critical_point_arr[i - 1]);
        }
        
        int max_dist = critical_point_arr.back() - critical_point_arr.front();
        
        return {min_dist, max_dist};
        
    }
};