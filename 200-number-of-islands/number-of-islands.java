class Solution {
    public int numIslands(char[][] grid) {
        //char to integer
        int rows= grid.length;
        int cols = grid[0].length;
        int cnt =0;
        for(int i= 0; i<rows ;i++){
            for(int j= 0; j< cols;j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(grid,i  , j );
                }
                
            }
        }
        return cnt;

        //condition where we visited the node
        // make it 0


        //use dfs for each visited and cnt++


    }
    public void dfs(char[][] grid,int row , int col){
        if(row < 0 || row >= grid.length || col < 0 || col >= grid[0].length){
            return;
        }
        if(grid[row][col] == '0'){
            return;
        }
        // visited
        grid[row][col] = '0';
        dfs(grid,row-1,col);
        dfs(grid,row+1,col);
        dfs(grid,row,col-1);
        dfs(grid,row,col+1);
            }
}