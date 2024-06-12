class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colorFreq(3, 0);

        for(int i = 0; i < nums.size(); i++){
            colorFreq[nums[i]]++;
        }

        int k = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < colorFreq[i]; j++){
                nums[k] = i;
                k++;
            }
        }
    }
};