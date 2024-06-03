class Solution {
public:
    void perm(vector<int>& nums, vector<int>& temp, vector<int>& fm, vector<vector<int>>& res){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(fm[i] == -11){
                continue;
            }

            temp.push_back(nums[i]);
            fm[i] = -11;
            perm(nums, temp, fm, res);
            temp.pop_back();
            fm[i] = nums[i];
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> temp;
        vector<int> fm = nums;

        perm(nums, temp, fm, res);

        return res;
    }
};