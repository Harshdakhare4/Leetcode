class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]<0) count++;
                else continue;
            }
        }
        return count;
    }
};