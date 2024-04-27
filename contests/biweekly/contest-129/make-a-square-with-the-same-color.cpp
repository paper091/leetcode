class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                int top_left        = (grid[i][j] == 'W');
                int top_right       = (grid[i][j+1] == 'W');
                int bottom_left     = (grid[i+1][j] == 'W');
                int bottom_right    = (grid[i+1][j+1] == 'W');
                
                int total = top_left+top_right+bottom_left+bottom_right;
                if( total<=1 || total>=3 ){ return true; }
            }
        }
        return false;
    }
};