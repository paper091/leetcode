class Solution {
public:

    void backtrack(vector<vector<int>>& res, vector<int>& temp, vector<int>& freq, int&sum, int& used, int& st, int& k, int& n){
        if(used == k){
            if(sum == n){
                res.push_back(temp);
            }
            return;
        }

        for(int i = st; i < 10; i++){
            temp.push_back(i);
            freq[i] = 1;
            sum += i;
            st = i+1;
            used++;

            backtrack(res, temp, freq, sum, used, st, k, n);

            temp.pop_back();
            freq[i] = 0;
            sum -= i;
            used--;

        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> freq(10);
        int used = 0, st = 1, sum = 0;

        backtrack(res, temp, freq, sum, used, st, k, n);

        return res;
    }
};