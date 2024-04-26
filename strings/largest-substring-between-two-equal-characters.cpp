class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int l = s.size();
        int currLen;
        int maxLen = -1;
        for(int i = 0; i < l; i++){
            for(int j = l-1; j > i; j--){
                if(s[i] == s[j]){
                    int currLen = j-i-1;
                    if( currLen > maxLen){
                        maxLen = currLen;
                    }
                }
            }
        }
        return maxLen;
    }
};