class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool twice = false;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                    if(twice){
                        nums.erase(nums.begin()+i);
                        i--;
                    }  
                    twice = true;  
            }
            else{
                twice = false;
            }
        }
        return nums.size();
    }
};