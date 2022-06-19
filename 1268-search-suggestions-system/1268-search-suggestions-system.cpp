class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans(searchWord.length());
        sort(products.begin(), products.end());
        
        for (int i = 1; i <= searchWord.length(); i++)
            for (int j = 0; j < products.size() && ans[i-1].size() < 3; j++)
                if (searchWord.substr(0, i) == products[j].substr(0, i)) 
                    ans[i-1].push_back(products[j]);
        
        return ans;
    }
};