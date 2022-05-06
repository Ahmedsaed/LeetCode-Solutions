class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n < k) return s;
        
        stack<pair<char, int>> stk;
        for (char ch : s) {
            if (stk.empty() || stk.top().first != ch) stk.push({ch, 1});
            else {
                auto prev = stk.top();
                stk.pop();
                if (prev.second + 1 < k) stk.push({ch, prev.second + 1});
            }
        }
        
        string ans = "";
        while (!stk.empty()) {
            ans.append(stk.top().second, stk.top().first);
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};