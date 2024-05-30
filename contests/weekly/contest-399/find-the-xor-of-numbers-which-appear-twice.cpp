class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int xor_single = 0;
        int xor_twice = 0;

        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                xor_twice = xor_twice^nums[i];
                i++;
            }
        }

        return xor_twice;
    }
};