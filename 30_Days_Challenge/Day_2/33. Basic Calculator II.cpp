class Solution {
public:
    int calculate(string s) {
        
        stack<int> st;
        char sign = '+';
        int temp = 0;

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(isdigit(c)) {
                temp = temp * 10 + (c - '0');
            }
            
            // Check the current character is an operator or it's the last character of the string
            if((!isdigit(c) && !isspace(c)) || i == s.size() - 1) {
                if(sign == '+') {
                    st.push(temp);
                } else if(sign == '-') {
                    st.push(-temp);
                 } else {
                    int n = 0;
                    if(sign == '*') {
                        n = st.top() * temp;
                    } else {
                        n = st.top() / temp;
                    }
                    st.pop();
                    st.push(n);
                }
                temp = 0;
                sign = c;
            }
        }

        int ans = 0;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
