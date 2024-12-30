class Solution {
  public:
  
  void dfs(vector<vector<char>>&grid,int row , int col){
   
   if(row>=grid.size() || row<0 || col>=grid[0].size() || col<0 || grid[row][col] =='0'){
    return ;
   }

   grid[row][col]='0';

   dfs(grid,row+1,col);
   dfs(grid,row-1,col);
   dfs(grid,row,col+1);
   dfs(grid,row,col-1);
   dfs(grid,row-1,col+1);
   dfs(grid,row-1,col-1);
   dfs(grid,row+1,col+1);
   dfs(grid,row+1,col-1);
                

}
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
         int cnt=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(grid,i,j);
                }
            }
        }
        return cnt;

    }
};