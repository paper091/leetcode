class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> res;
        long long max = 0;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
            }

            sum += nums[i] + max;
            res.push_back(sum);
        }

        return res;
    }
};