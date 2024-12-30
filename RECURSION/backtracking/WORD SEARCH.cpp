#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool  safe(vector<vector<char>>&board,string word,vector<vector<bool>>&visited , int row,int col,int n , int m,int index ){
	
	if(row>=0 && row<m &&col>=0 && col<n && visited[row][col] == false && board[row][col] == word[index]){
		return true;
	}
	return false;
}


bool  solve(vector<vector<char>>&board,string word,vector<vector<bool>>&visited , int row,int col,int n , int m,int index )
{
	 if(index>=word.size()-1){
	 	return true;
	 }
	 
	  visited[row][col] = true;
	  
	  bool d;
	  bool l;
 	  bool r;
	  bool u;
	  //down
	  if(safe(board ,word,visited,row+1,col,n,m,index+1)){
	  	  d= solve(board,word,visited,row+1,col,n,m,index+1);
	  }
	  
	  // left
	   if(safe(board ,word,visited,row,col-1,n,m,index+1)){
	  	  l= solve(board,word,visited,row,col-1,n,m,index+1);
	  }
	  
	   //right
	   if(safe(board ,word,visited,row,col+1,n,m,index+1)){
	  	  r= solve(board,word,visited,row,col+1,n,m,index+1);
	  } 
	   // up
	   if(safe(board ,word,visited,row-1,col,n,m,index+1)){
	  	  u = solve(board,word,visited,row-1,col,n,m,index+1);
	  }
	  
	 
	  visited[row][col] = false;
	  return d == true ||l==true||r==true||u== true;
	  
}


int main(){
	
	vector<vector<char>>board= {{'A','B','C','E'},
                               	{'S','F','C','S'},
	                            {'A','D','E','E' }	};
	                            
	string word = "ABCB";    
	int m = board.size();
	int n = board[0].size();
	 
	vector<vector<bool>>visited(m,vector<bool>(n,false));                      
         
		for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[0].size(); j++) {
        if (board[i][j] == word[0]) {
            bool ans = solve(board, word, visited, i, j, n, m, 0);
            if (ans == true) {
                cout << "true" << endl;
                return 0; // Add this line to stop searching when a solution is found
            }
        }
    }
}

cout << "false" << endl; // Print "false" only when no solution is found
          

	return 0 ;
}
