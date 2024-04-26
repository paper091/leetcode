class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty()){
                char ch1 = st.top();
                char ch2 = s[i];

                if(ch1!=ch2 && tolower(ch1)==tolower(ch2)){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};