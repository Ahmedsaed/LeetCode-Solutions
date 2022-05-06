class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> dq;
        
        for (int i : nums) {
            if (i % 2 == 0) dq.push_front(i);
            else dq.push_back(i);
        }
        
        vector<int> ans;
        for (int i : dq) ans.push_back(i);
        return ans;
    }
};