class Solution {
public:
    bool cmp(string s1, string s2){
        int n = s1.size();
        for(int i = 0; i < n; i++){
            if(s1[i] < s2[i]){ return false; }
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return (cmp(s1,s2) || cmp(s2,s1));
    }
};