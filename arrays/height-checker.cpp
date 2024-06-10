class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> order = heights;
        sort(order.begin(), order.end());

        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != order[i]){
                count++;
            }
        }

        return count;
    }
};