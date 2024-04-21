class Solution {
public:

    void sortRemaining(vector<int>& nums,  int start){
        vector<int> rem;
        int i = start;
        while(i < nums.size()){
            rem.push_back(nums[i]);
            i++;
        }

        nums.resize(start);
        sort(rem.begin(), rem.end());
        
        i = 0;
        while(i < rem.size()){
            nums.push_back(rem[i]);
            i++;
        }
        rem.clear();

    }
    void nextPermutation(vector<int>& nums) {

        int s = nums.size();
        for(int i = s-1; i>0; i--){
            if(nums[i-1] < nums[i]){

                sortRemaining(nums, i);
                int id = i-1;
                int j = 0;
                while( (i+j)<s ){

                    if(nums[id] < nums[i+j]){
                        int temp = nums[id];
                        nums[id] = nums[i+j];
                        nums[i+j] = temp;
                        break;
                    }
                    j++;
                    
                }
                return;
            }
        }

        sort(nums.begin(), nums.end());
    }
};