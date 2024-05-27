/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> ans;

        for(int i  = 1; i <= 1000; i++){
            int beg = 1;
            int end = 1000;

            while(beg<=end){
                int mid = (beg+end)/2;
                if(customfunction.f(i, mid) == z){
                    ans.push_back(vector<int>({i, mid}));
                    break;
                }
                else if(customfunction.f(i, mid) > z){
                    end = mid-1;
                }
                else{
                    beg = mid+1;
                }
            }
        }
        return ans;
    }
};