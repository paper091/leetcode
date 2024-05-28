class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int counter = 0;

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        for(int i  = 0; i < arr1.size(); i++){

            int l = 0;
            int r = arr2.size()-1;
            while(l<=r){

                if( abs(arr1[i]-arr2[l]) <= d ){
                    counter--;
                    break;
                }
                if( abs(arr1[i]-arr2[r]) <= d ){
                    counter--;
                    break;
                }

                l++;
                r--;
            }
            counter++;
        }

        return counter;
    }
};