class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<vector<int>> fract;
        vector<double> vals; 

        for(int i = 0; i < arr.size(); i++){
            for(int j = arr.size()-1; j > i; j--){
                fract.push_back(vector<int>({arr[i], arr[j]}));

                double temp = static_cast<double>(arr[i]) / static_cast<double>(arr[j]);
                vals.push_back( temp );
            }
        }

        for(int i = 0; i < k; i++){
            for(int j = 0; j < vals.size()-1-i; j++){
                if(vals[j] < vals[j+1]){
                    double temp = vals[j];
                    vals[j] = vals[j+1];
                    vals[j+1] = temp;

                    vector<int> t = fract[j];
                    fract.erase(fract.begin()+j);
                    fract.insert(fract.begin()+j+1, t);
                    
                }
            }
        }

        return fract[fract.size()-k];
    }
};