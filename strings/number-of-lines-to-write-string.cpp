class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> lines = {0, 0};

        int curr = 0;
        for(int i = 0; i < s.size(); i++){
            int temp = curr + widths[s[i]-65];
            if(curr > 100){
                i--;
                lines[0]++;
                lines[1] = curr;
                curr = 0;
                continue;
            } 
            curr += temp;
        }

        return lines;
    }
};