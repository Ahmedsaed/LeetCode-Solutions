class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> visited;
        perm(result, nums, visited);
        return result;
    }
    
    void perm(vector<vector<int>> &result, vector<int> &nums, vector<int> visited) {
        if (visited.size() == nums.size() && find(result.begin(), result.end(), visited) == result.end()) {
            result.push_back(visited);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 11) {
                visited.push_back(nums[i]);
                int j = nums[i];
                nums[i] = 11;
                perm(result, nums, visited);
                nums[i] = j;
                visited.pop_back();
            }
        }
    }
};