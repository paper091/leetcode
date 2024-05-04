class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int minDiff = INT_MAX;
        int maxFreq = 0;
        int temp;
        unordered_map<int, int> diffFreq;
        for(int i = 0; i < nums2.size(); i++){
            for(int j = 0; j < nums1.size(); j++){
                temp = nums2[i] - nums1[j];
                diffFreq[temp]++;

                if(maxFreq < diffFreq[temp]){
                    maxFreq = diffFreq[temp];
                    minDiff = INT_MAX;
                }
                if(diffFreq[temp]==maxFreq && temp<minDiff){
                    minDiff = temp;
                }
            }
        }

        // sort()
        return minDiff; 
    }
};