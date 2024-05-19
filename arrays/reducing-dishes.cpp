class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        int maxSatisf = 0;
        int sum = 0;
        sort(satisfaction.begin(), satisfaction.end());
        for(int i = 0; i < satisfaction.size(); i++){
            maxSatisf = maxSatisf + (i+1)*satisfaction[i];
            sum += satisfaction[i];
        }

        int temp = maxSatisf;
        for(int i = 0; i < satisfaction.size(); i++){
            temp = temp - sum;
            sum = sum - satisfaction[i];

            if(temp > maxSatisf){
                maxSatisf = temp;
            }
        }

        return (maxSatisf>0?maxSatisf:0);
    }
};