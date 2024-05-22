class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int beg = 0;
        int end = nums.size()-1;
        int mid = (beg+end)/2;
        while(beg<end){

            mid = (beg+end)/2;
            if(nums[mid]<target){
                beg = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                return mid;
            }
        }

        mid = beg;
        if(nums[mid] < target){
            mid++;
        }

        return mid;
    }
};