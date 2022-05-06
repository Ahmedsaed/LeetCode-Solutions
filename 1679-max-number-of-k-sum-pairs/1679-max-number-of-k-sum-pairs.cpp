class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int op = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int x = k - nums[i];
            if (mp[x]) {
                op++;
                mp[x]--;
            }
            else mp[nums[i]]++;
        }
        return op;
    }
};