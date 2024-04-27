class Solution {
public:

    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long counter = 0;
        unordered_map<int, int> rowMap;
        unordered_map<int, int> colMap;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]!=1){
                    continue;
                }
                
                int row;
                int col;
                
                if(rowMap[i]==0){
                    row = 0;
                    for(int c = 0; c < grid[i].size(); c++){
                            if(grid[i][c]==1){
                            row++;
                        }
                    }
                    rowMap[i] = row;
                }
                if(colMap[j]==0){
                    col = 0;
                    for(int r = 0; r < grid.size(); r++){
                        if(grid[r][j]==1){
                            col++;
                        }
                    }
                    colMap[j] = col;
                }
                
                row = rowMap[i]-1;
                col = colMap[j]-1;
                counter += (row*col);
            }
        }
        for(int i = 0; i < rowMap.size(); i++){
            cout << rowMap[i] << " ";
        }
        cout << endl;
        for(int j = 0; j < colMap.size(); j++){
            cout << colMap[j] << " ";
        }
        cout << endl;
        return counter;
    }
};