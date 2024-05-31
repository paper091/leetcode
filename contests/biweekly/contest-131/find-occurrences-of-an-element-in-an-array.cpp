class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indices;
        indices.push_back(-1);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                indices.push_back(i);
            }
        }

        vector<int> ans;
        for(int i = 0; i < queries.size(); i++){
            if(queries[i] < indices.size()){
                ans.push_back( indices[queries[i]] );
            }
            else{
                ans.push_back(-1);
            }
        }

        return ans;
    }
};