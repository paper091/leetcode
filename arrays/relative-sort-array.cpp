class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int, int> freqMap;
        for(int i = 0; i < arr1.size(); i++){
            freqMap[arr1[i]]++;
        }

        arr1.clear();
        for(int i = 0; i < arr2.size(); i++){
            int f = freqMap[arr2[i]];
            freqMap[arr2[i]] = 0;
            for(int j = 0; j < f; j++){
                arr1.push_back(arr2[i]);
            }
        }

        for(auto itr = freqMap.begin(); itr != freqMap.end(); itr++){
            if(itr->second == 0){
                continue;
            }
            int f = itr->second;
            int v = itr->first;
            for(int j = 0; j < f; j++){
                arr1.push_back(v);
            }
        }

        return arr1;
    }
};