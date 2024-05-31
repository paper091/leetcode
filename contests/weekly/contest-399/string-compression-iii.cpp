class Solution {
public:
    string compressedString(string word) {
        string w;
        stack<char> st;

        word += "0"; //signifying end
        st.push(word[0]);
        for(int i = 1; i < word.size(); i++){
            if(st.top() == word[i]){
                st.push(word[i]);
            }
            else{
                int count = st.size();
                
                // this is returning empty
                // w += char(count+30);

                while(count > 9){
                    w += '9';
                    w += st.top();
                    count -= 9;   
                }
                w += to_string(count);
                w += st.top();
                while(!st.empty()){
                    st.pop();
                }
                st.push(word[i]);
            }
        }
        return w;
    }
};