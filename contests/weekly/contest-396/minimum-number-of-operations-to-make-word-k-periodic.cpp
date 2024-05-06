class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string, int> freq;
        int maxFreq = 0;
        for(int i = 0; i < word.size(); i=i+k){
            string temp = word.substr(i, k);
            freq[temp]++;
            if(freq[temp]>maxFreq){
                maxFreq = freq[temp];
            }
        }
        return (word.size()/k)-maxFreq;
    }
};