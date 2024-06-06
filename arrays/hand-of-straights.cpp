class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> freq;

        if(hand.size()%groupSize != 0){
            return false;
        }

        for(int i = 0; i < hand.size(); i++){
            freq[hand[i]]++;
        }

        // int i = 1;
        for(map<int, int>::iterator itr = freq.begin(); itr != freq.end(); itr++){
            if(itr->second == 0){
                continue;
            }
            // if(itr->second > groupSize){
            //     return false;
            // }
            int groups = itr->second;
            itr->second = 0;

            // int j = i;
            int curr = itr->first;
            // cout << curr << " ";
            for(int k = 1; k < groupSize; k++){
                
                if(freq[curr+k] >= groups){
                    freq[curr+k] -= groups;
                }
                else{
                    return false;
                }
            }
            // for(unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); it++){
            //     while(j){ j--; continue; }
            //     if(j>s){ break; }
            //     if(it->second < s){
            //         break;
            //     }
            //     it->second -= s;
            //     j++;
            // }

            // i++;
        }
        for(map<int, int>::iterator itr = freq.begin(); itr != freq.end(); itr++){
            if(itr->second > 0){
                return false;
            }
        }

        return true;
    }
};