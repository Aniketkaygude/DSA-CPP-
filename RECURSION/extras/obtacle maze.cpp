#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>

using namespace std;

void paths(string s , vector<vector<bool>>&maze,int row,int col){
	
	if(row ==maze.size()-1 && col ==maze[0].size()-1){
		cout<<s<<"  ";
		return;
	}
	
	if(!maze[row][col]){
		return;
	}
	/*
	if(row<maze.size()-1 && col<maze[0].size()-1){
		paths(s+"D",maze,row+1,col+1);
	}
	*/
	if(row<maze.size()-1){
		paths(s+"D" ,maze,row+1,col);
	}	
	
		if(col<maze[0].size()-1){
		paths(s+"R" ,maze , row,col+1);
	}

}


int main(){



vector<vector<bool>> maze = {
  {true , true , true},
  {true , false , true},
  {true , true , true}
   
};

paths( "", maze, 0 , 0);

	return 0 ;
}
