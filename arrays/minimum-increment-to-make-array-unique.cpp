class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        map<int , int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        int numbers = 0;
        int moves = 0;
        int prev = -1;
        for(auto itr = freq.begin(); itr != freq.end(); itr++){
            
            // int diff = (itr->first) - prev;
            // if(prev!=-1 && diff>1){
            //     numbers -= (diff-1);
            // }
            cout << itr->first << " " << itr->second << endl;
            
            if(itr->second > 1){
                numbers = (itr->second)-1;
                moves += numbers;
                freq[itr->first + 1] += numbers;
            }

            // prev = itr->first;
        }
        auto it = freq.rbegin();
        int n = it->second - 1;
        cout << n;

        moves += n*(n+1)/2;

        return moves;
    }
};