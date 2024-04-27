class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        
        int l, r;
        
        sort(points.begin(), points.end());

        l = r = points[0][0];
        int rectangleCount = 0;
        for(int i = 1; i < points.size(); i++){
            r = points[i][0];
            if(r-l > w){
                l = r;
                rectangleCount++;
            }
        }
        rectangleCount++;
        
        return rectangleCount;
    }
};