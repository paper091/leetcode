#include<bits/stdc++.h>
using namespace std;
int main(){

        string s = "abbaca";
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
            cout << st.top();
            ans += st.top();
            st.pop();
        }
        cout << endl;
        reverse(ans.begin(), ans.end());
    cout <<  ans;
    return 0;
}