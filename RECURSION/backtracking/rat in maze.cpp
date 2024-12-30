#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool safe(int row , int col ,int n, vector<vector<bool>>&visited,vector<vector<bool>>&maze){
	if(row<n &&row>=0&&col>=0 &&col<n &&visited[row][col] == false && maze[row][col] == true )
	{
		return true;
	}
	return false;
}

void solve(vector<vector<bool>>&maze , vector<vector<bool>>&visited ,vector<string>&ans,string path, int row,int col ,int n)
{
	if(row == n-1 && col == n-1){
		ans.push_back(path);
		return ;
	}
	
	visited[row][col] =true;
	
	if(safe(row+1,col,n,visited,maze)){
		solve(maze,visited,ans,path +"D",row+1,col,n);
	}
	if(safe(row,col-1,n,visited,maze)){
		solve(maze,visited,ans,path +"L",row,col-1,n);
	}
	if(safe(row,col+1,n,visited,maze)){
		solve(maze,visited,ans,path +"R",row,col+1,n);
	}
	if(safe(row-1,col,n,visited,maze)){
		solve(maze,visited,ans,path +"U",row-1,col,n);
	}
	
	visited[row][col]= false;
	 
	 
}


int main(){

vector<vector<bool>>maze = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
         
vector<vector<bool>>visited(4,vector<bool>(4,false));

vector<string>ans;
string path ="";
int n = 4;
solve(maze,visited,ans,path ,0,0,n);

for(string i:ans){
	cout<<i<<endl;
}         

	return 0 ;
}
