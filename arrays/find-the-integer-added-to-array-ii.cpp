class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {

        int temp;
        set<int> possibleDiff;
        for(int i = 0; i < nums2.size(); i++){
            for(int j = 0; j < nums1.size(); j++){
                temp = nums2[i] - nums1[j];
                possibleDiff.insert(temp);
            }
        }

        for(auto itr = possibleDiff.begin(); itr != possibleDiff.end(); itr++){
            cout << *itr << " ";
        }


        bool valid = true;
        for(auto itr = possibleDiff.begin(); itr != possibleDiff.end(); itr++){
            
            valid = true;
            vector<int> n1 = nums1;
            for(int i = 0; i < nums2.size(); i++){
                auto loc = find(n1.begin(), n1.end(), (nums2[i]-(*itr)));
                if(loc == n1.end()){
                    valid = false;
                    break;
                }
                else{
                    n1.erase(loc);
                }
            }

            if(valid){
                return *itr;
            }
        }

        return INT_MAX; 
    }
};