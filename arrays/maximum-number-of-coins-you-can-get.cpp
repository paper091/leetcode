class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.begin(), piles.end());
        
        int beg = 0;
        int end = piles.size()-1;
        int mySum = 0;
        while(beg<=end){
            mySum += piles[end-1];
            beg++;
            end -= 2;
            
            // piles.insert(piles.begin(), piles[piles.size()-1]);
            // piles.insert(piles.begin(), piles[piles.size()-2]);

            // piles.erase(piles.begin()+piles.size()-1);
            // piles.erase(piles.begin()+piles.size()-2);
        }

        return mySum;
    }
};