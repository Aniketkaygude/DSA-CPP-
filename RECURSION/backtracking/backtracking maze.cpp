#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void allpaths(string s , vector<vector<bool>>&maze,int row,int col){
	
	if(row ==maze.size()-1 && col ==maze[0].size()-1){
		cout<<s<<"  ";
		return;
	}
	
	if(!maze[row][col]){
		return;
	}
	
	
    maze[row][col] = false;
	//down
	if(row<maze.size()-1){
		allpaths(s+"D" ,maze,row+1,col);
	}	
	
	//right
	if(col<maze[0].size()-1){
		allpaths(s+"R" ,maze , row,col+1);
	}
	
	
	//up
	if(row>0){
		allpaths(s+"U",maze,row-1,col);
	}
	
	//left
	if(col>0){
		allpaths(s+"L",maze, row,col-1);
	}
	
	// thsi line is where the function will be over
	// so before the function gets removed ,also remove the changes that were made by 
	// that function
	
	maze[row][col] = true;

}


void  allpathsprint(string s ,vector<vector<bool>> &maze, vector<vector<int>>& ans ,int r,int c, int path ){
	
	if(r==maze.size()-1 && c==maze[0].size()-1){
		ans[r][c] = path;
		for(int  i =0 ; i<ans.size();i++){
			for(int j = 0;j<ans[0].size();j++){
		     	cout<<ans[i][j]<<" ";
			}
		cout<<endl;
		}
		
		cout<<s<<endl<<endl;
		
		return;
	}
	
	if(maze[r][c] == false){
		return;
	}
	
	  maze[r][c] = false;
	  ans[r][c] = path;
	//down
	if(r<maze.size()-1){
		allpathsprint(s+"D" ,maze,ans,r+1,c,path+1);
	}	
	
	//right
	if(c<maze[0].size()-1){
		allpathsprint(s+"R" ,maze ,ans,r,c+1,path+1);
	}
	
	
	//up
	if(r>0){
		allpathsprint(s+"U",maze,ans,r-1,c,path+1);
	}
	
	//left
	if(c>0){
		allpathsprint(s+"L",maze, ans,r,c-1,path+1);
	}
	
	// thsi line is where the function will be over
	// so before the function gets removed ,also remove the changes that were made by 
	// that function
	
	maze[r][c] = true;
}


int main(){

vector<vector<bool>> maze = {
  {true , true , true},
  {true , true , true},
  {true , true , true}
   
};

vector<vector<int>> ans(maze.size(),vector<int>(maze[0].size()));
//allpaths( "", maze, 0 , 0);

allpathsprint("",maze,ans,0,0,1);

	return 0 ;
}
