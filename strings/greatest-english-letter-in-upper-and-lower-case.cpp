class Solution {
public:
    string greatestLetter(string s) {
        vector<char> lowerChar;
        vector<char> upperChar;
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i])){
                lowerChar.push_back(s[i]);
            }
            else{
                upperChar.push_back(tolower(s[i]));
            }
        }
        sort(lowerChar.begin(), lowerChar.end(), greater<int>());
        sort(upperChar.begin(), upperChar.end(), greater<int>());
        
        string ans = "";
        int l = 0;
        int u = 0;
        while(l<lowerChar.size() && u<upperChar.size()){
            if(lowerChar[l] < upperChar[u]){
                u++;
            }
            else if(lowerChar[l] > upperChar[u]){
                l++;
            }
            else{
                char t = toupper(upperChar[u]);
                ans += t;   
                break;
            }
        }

        return ans;
    }
};