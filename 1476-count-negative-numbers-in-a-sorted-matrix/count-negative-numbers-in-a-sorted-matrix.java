class Solution {
    public int countNegatives(int[][] grid) {
        int n=grid[0].length;
        int count=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]<0) count++;
                else continue;
            }
        }
        return count;
    }
}