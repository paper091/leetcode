class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> lines{0, 0};
        
        int curr = 0;
        for(int i = 0; i < s.size(); i++){
            
            int temp = widths[int(s[i])-int('a')];
            if((curr+temp) > 100){
                lines[0]++;
                lines[1] = curr;
                curr = 0;
            } 
            curr += temp;
        }
       
        lines[0]++;
        lines[1] = curr;
        
        return lines;
    }
};