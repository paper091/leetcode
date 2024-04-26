class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(int i = 0; i < strs.size(); i++){
            string tempStr = strs[i];
            sort(tempStr.begin(), tempStr.end());
            
            vector<string> tempV = anagrams[tempStr];
            tempV.push_back(strs[i]);

            anagrams[tempStr] = tempV;
        }

        vector<vector<string>> groupedAnagrams;
        for(auto itr=anagrams.begin(); itr!=anagrams.end(); itr++){
            groupedAnagrams.push_back(itr->second);
        }
        return groupedAnagrams;
    }
};