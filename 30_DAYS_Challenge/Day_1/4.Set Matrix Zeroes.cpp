class Solution {
public:

void helper(vector<vector<int>>& ans , int row,int col){
    
    for(int i = 0;i<ans.size();i++){
        ans[i][col] =0;
    }
    
    for(int i = 0;i<ans[0].size();i++){
        ans[row][i]=0;
    }
}
    void setZeroes(vector<vector<int>>& m) {
        vector<vector<int>> ans(m.size(),vector<int>(m.size()));

  vector<pair<int,int>>p;            
for(int row = 0 ;row<m.size();row++){
    for(int col=0; col<m[0].size();col++){
        
        if(m[row][col] == 0){
           p.push_back({row,col});
        }
       
    }
}
       
       // pair<int,int>:: iterator it;
       for(vector<pair<int, int>>::iterator it = p.begin(); it != p.end(); ++it) {
    helper(m,(*it).first, (*it).second);
}
    }
};