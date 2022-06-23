class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> n;
        for (int i =0; i < nums.size(); i++) {
            if (n[nums[i]] > 0) return 1;
            else n[nums[i]]++;
        }
        return 0;
    }
};