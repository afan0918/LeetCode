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
    int numComponents(ListNode* head, vector<int>& nums) {
        int res=0,i=0;
        ListNode* tail=head;
        unordered_set<int> set;
		
		for(int i=0;i<nums.size();i++) 
			set.insert(nums[i]);
        
        while(tail){
            if(set.count(tail->val)) {
                res++;
                while(tail&&set.count(tail->val)) 
					tail=tail->next;
            }
            if(tail) tail=tail->next;
        }
        
        return res;
    }
};