class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> s={{}};
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            temp.clear();

            int N = s.size();
            for(int j = 0; j < N;  j++){
                temp = s[j];
                temp.push_back(nums[i]);
                s.push_back(temp);
            }

            // ans.push_back(vector<int>{nums[i]});
        }
        return s;
    }
};