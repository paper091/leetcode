class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long val = 0;

        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            int temp = nums[j];
            while(temp){
                nums[i] = nums[i] * 10;
                temp = temp/10;
            }
            val += (nums[i]+nums[j]);
            i++;
            j--;
        }

        if(i==j){
            val += nums[i];
        }

        return val;
    }
};