class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        stack<int> indices;

        for(int i=0; i<s.size(); i++){
            if(!st.empty()){
                if(st.top()=='(' && s[i]==')'){
                    st.pop();
                    indices.pop();
                    continue;
                }
            }
            if(!isalpha(s[i])){
                st.push(s[i]);
                indices.push(i);
            }
        }

        int i = 0;
        while(!indices.empty()){
            s.erase(s.begin()+indices.top());
            indices.pop();
            i++;
        }
        return s;
    }
};