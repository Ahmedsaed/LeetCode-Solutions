class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int f = -1, l = -1;
        vector<int> snums = nums;
        sort(snums.begin(), snums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (snums[i] != nums[i]) {
                if (f == -1) {
                    f = i;                
                }
                else {
                    l = i;
                }
            }
        }
        
        return (f == -1) ? 0 : l - f + 1;
    }
};