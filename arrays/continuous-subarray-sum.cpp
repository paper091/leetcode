class Solution {
public:

    bool brute(vector<int>& nums, int beg, int end, int k){
        if(beg == end){
            return false;
        }

        int sum = 0;
        for(int i = beg; i <= end; i++){
            sum += nums[i];
            if(sum%k==0 && (i-beg+1)>1){
                cout << beg << " " << i << " " << end << endl;
                cout << sum << " " << k << endl << endl;
                return true;
            }
        }

        if( brute(nums, beg+1, end, k) ){
            return true;
        }
        if( brute(nums, beg, end-1, k) ){
            return true;
        }

        return false;
    }
    bool checkSubarraySum(vector<int>& nums, int k) {
        return brute(nums, 0, nums.size()-1, k);
    }
};