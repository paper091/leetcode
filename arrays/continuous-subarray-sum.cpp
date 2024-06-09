class Solution {
public:
    struct anotherVal{
        int val = -1; // can be changed as per requirement 
    };  
    bool checkSubarraySum(vector<int>& nums, int k) {

        map<int, struct anotherVal> mods;
        int sum = 0;
        int m;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            m = sum%k;
            if(m == 0 && i > 0){
                return true;
            }
            // cout << m << " " << mods[m].val << endl;
            if(mods[m].val == -1){
                mods[m].val = i;
            }
            else{
                if(abs(mods[m].val-i)>1){
                    return true;
                }
                // else{
                //     mods[m].val = -1;
                // }
            }

            // if(mods[k-m].val != -1){
            //     if( (abs(mods[k-m].val-i)+1) > 1 ){
            //         return true;
            //     }
            // }
        }
        // for(int )
        return false;
    }
};