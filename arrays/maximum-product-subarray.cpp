class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN;
        int max =  INT_MIN;
        int product = 1;
        int oddNegation = 0;

        // int i = 0;
        for(int i = 0; i < nums.size(); i++){
            product = product*nums[i];

            if(product > maxProduct){
                maxProduct = product;
            }
            if(product == 0){
                product = 1;
            }  
            if(product < 0 && oddNegation == 0){
                oddNegation = product;
            }

            if(nums[i] > max){max = nums[i];}
        }

        if( product < 0 && product != oddNegation){ 
            product = product/oddNegation;
            if(product > maxProduct){
                maxProduct = product;
            }
        }
        return maxProduct>max?maxProduct:max;
    }
};