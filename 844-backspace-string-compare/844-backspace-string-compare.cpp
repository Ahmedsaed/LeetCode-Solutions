class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a, b;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                if (!a.empty()) a.pop();
            } 
            else a.push(s[i]);
        }
        
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#') {
                if (!b.empty()) b.pop();
            } 
            else b.push(t[i]);
        }
        bool answer = true;
        while (!a.empty() && !b.empty()) {
            cout << a.top() << " " << b.top() << endl;
            if (a.top() == b.top()) {
                a.pop();
                b.pop();
            }
            else {
                answer = false;
                break;
            }
        }
        
        if (a.size() > 0 || b.size() > 0) answer = false;
        
        return answer;
    }
};