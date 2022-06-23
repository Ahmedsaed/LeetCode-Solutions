class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c = 0, n = INT_MIN;
        for (int i : nums) {
            c = max(i, c + i);
            n = max(c, n);
        }
        return n;
    }
};