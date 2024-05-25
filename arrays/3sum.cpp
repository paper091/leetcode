class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<vector<int>> ans;
        // set<vector<int>> sum;

        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int s = (nums[i]+nums[j]+nums[k]);
                if( s == 0 ){
                    ans.push_back( vector<int>({nums[i], nums[j], nums[k]}) );
                    j++;
                    k--;
                }
                else if(s < 0){
                    j++;
                }
                else{
                    k--;
                }
            }        
        }

        // for(auto itr: sum){
        //     ans.push_back(itr);
        // }

        return ans;
    }
};