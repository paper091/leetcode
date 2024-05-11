class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> numFreq;
        vector<int> reps;

        for(int i = 0; i < nums.size(); i++){
            numFreq[nums[i]]++;
        }

        for(unordered_map<int, int>::iterator itr = numFreq.begin();  itr != numFreq.end(); itr++){
            if(itr->second > 1){
                reps.push_back(itr->first);
            }
        }

        return reps;
    }
};