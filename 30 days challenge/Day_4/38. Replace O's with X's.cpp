class Solution{
public:

void dfs (int row, int col, vector<vector<bool>>&vis , vector<vector<char>>&nums){

    if(row<0 || row>=nums.size() || col<0 || 
	col>=nums[row].size() ||vis[row][col] == true
    || nums[row][col]!='O' ){
        return;
    }    
    
    vis[row][col] =true;
    
    dfs(row,col-1,vis,nums);
    dfs(row,col+1,vis,nums);
     
    dfs(row-1,col,vis,nums);
    dfs(row+1,col,vis,nums);
    
}

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        
        // traverse first row and last row 
        for(int j=0;j<m;j++){
            // first row
            
            if(!vis[0][j] && mat[0][j] == 'O'){
                dfs(0,j,vis,mat);
            } 
            
            
            // last row 
            
            if(!vis[n-1][j] && mat[n-1][j] =='O'){
                dfs(n-1,j,vis,mat);
            }
        }
        
        for(int i=0;i<n;i++){
            // firs column
            
            if(!vis[i][0] && mat[i][0] == 'O'){
                dfs(i,0,vis ,mat);
            }
            
            if(!vis[i][m-1] && mat[i][m-1] == 'O'){
                dfs(i, m-1, vis,mat);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++){
            
               if(!vis[i][j] && mat[i][j] =='O'){
                   mat[i][j]='X';
               }     
                
            }
        }
        return mat;   
           
    }
};