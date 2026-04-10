class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]==')' && st.top()=='('){
                st.pop();

                continue;}
            if(!st.empty() && st.top()=='{' && s[i]=='}'){
            
                    st.pop();

                    continue;}
            if(!st.empty() && s[i]==']' && st.top()=='['){
            
                    st.pop();

                    continue;
            }
            st.push(s[i]);
}

    return st.empty();

    }
};

