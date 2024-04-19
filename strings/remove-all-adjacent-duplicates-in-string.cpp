class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            char curr = s[i];
            if(!st.empty()){
                if(st.top()==curr){
                    st.pop();
                }
                else{
                    st.push(curr);
                }
            }
            else{
                st.push(curr);
            }
        }
        string ans = "";
        char t;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};