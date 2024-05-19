class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        // unordered_map<int, int> freqMap;
        vector<vector<int>> matrix;
        vector<int> temp;


        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            
            temp.clear();
            while(start<=end){
                auto itr = find(temp.begin(), temp.end(), nums[start]);

                if(itr!=temp.end()){
                    nums.push_back(nums[start]);
                    nums.erase(nums.begin()+start);
                    end--;
                }
                else{
                    temp.push_back(nums[start]);
                    start++;
                }
            }
            matrix.push_back(temp);
            end = nums.size()-1;
        }

        // int i = 0;
        // while(i <= nums.size()){
        //     temp.clear();
        //     for(auto itr = freqMap.begin(); itr != freqMap.end(); itr++){
        //         if((itr->second) > 0){
        //             temp.push_back(itr->first);
        //             (itr->second)--;
        //             i++;
        //         }
                
        //     }
        //     matrix.push_back(temp);
        // }
        
        // for(int i = 0; i < matrix.size(); i++){
        //     for(int j = 0; j < matrix[i].size(); j++){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return matrix;
    }
};