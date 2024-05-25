class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int numsMin, numsMax;
        numsMin = INT_MAX;
        numsMax = -1;

        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]<0){
                continue;
            }
            
            if(nums[i] < numsMin){
                numsMin = nums[i];
            }
            if(nums[i] > numsMax){
                numsMax = nums[i];
            }
            freq[nums[i]]++;
        }
        if(numsMin > 1){
            return 1;
        }
        for(int i = numsMin; i <= numsMax; i++){
            if(freq[i]<1){
                return i;
            }
        }

        return numsMax+1;
        // return res;
    }
};  