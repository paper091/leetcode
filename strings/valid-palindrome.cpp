class Solution {
public:
    bool isPalindrome(string s) {
        regex r("[^a-zA-Z0-9]");
        s = regex_replace(s, r, ""); 
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int i = 0;
        int j = s.size()-1;
        string sr = s;
        reverse(sr.begin(), sr.end());
        return (s==sr);
    }
};