class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        
        int ans = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
                st.push(i);
            
            // if it is close then pop the stack 
            // and check it is empty or not if it is empty then push current value to it because if there is another ) then we can not pop our stack if it is empty
            // if it is not empty then find the length between the (current index i and stack top index) and store the max value in ans
            else
            {
                st.pop();
                
                if(st.empty())
                    st.push(i);
                else
                    ans = max(ans,i-st.top());
            }
        }
        
        // returning the answer
        return ans;
        
    }
};