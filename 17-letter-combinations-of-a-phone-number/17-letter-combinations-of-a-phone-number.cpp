class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int, vector<char>> mp;
        vector<string> result;
        
        if (digits.empty()) return {};
        result.push_back("");
        
        mp[0] = {};
        mp[1] = {};
        mp[2] = {'a', 'b', 'c'};
        mp[3] = {'d', 'e', 'f'};
        mp[4] = {'g', 'h', 'i'};
        mp[5] = {'j', 'k', 'l'};
        mp[6] = {'m', 'n', 'o'};
        mp[7] = {'p', 'q', 'r', 's'};
        mp[8] = {'t', 'u', 'v'};
        mp[9] = {'w', 'y', 'x', 'z'};

        for (auto digit : digits) {
            vector<string> tmp;
            for (auto c : mp[digit - '0'])
                for (auto s : result) 
                    tmp.push_back(s + c);
            result.swap(tmp);
        }
        
        return result;
        
    }
    
    void combinations(vector<string> &s) {
        
    }
};