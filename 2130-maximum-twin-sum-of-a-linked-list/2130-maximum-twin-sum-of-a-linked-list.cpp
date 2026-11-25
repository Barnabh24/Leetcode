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
private:
    vector<int> convert(ListNode* head) {
        vector<int>ans;
        ListNode* temp = head;
        while(temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        return ans;
    }

public:
    int pairSum(ListNode* head) {
        vector<int>a = convert(head);
        int l = 0;
        int r = a.size()-1;
        int maxi = 0;  
        while(l<r) {
            int sum = a[l] + a[r];
            maxi = max(maxi,sum);
            l++;
            r--;
        }  
        return maxi;
    }
};