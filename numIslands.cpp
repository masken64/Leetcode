class Solution {
public:
    void check(int row1, int col1, vector<vector<int>>& cache, vector<vector<char>>& grid) {
    
        if(row1<0 || row1>=grid.size() || col1<0 || col1>=grid[0].size()) return;
        
        if(grid[row1][col1] == '0') return;
        if(cache[row1][col1] == 1) return;

        cache[row1][col1] = 1;
    
        check(row1-1, col1, cache, grid);
        check(row1, col1-1, cache, grid);
        check(row1, col1+1, cache, grid);
        check(row1+1, col1, cache, grid);
        
    };
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size(), col = grid[0].size();
        
        vector<vector<int>> cache(row, vector<int>(col, 0));
        int count = 0;
        for(int r=0; r<row; r++) {
            for(int c=0; c<col; c++) {
                if(grid[r][c] == '1' && cache[r][c] == 0) {
                    
                    check(r, c, cache, grid);
                    count++;
                    
                }
            }
        }

        return count;
    }
};
