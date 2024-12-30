#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isSafe(vector<string>& board ,int row, int col ,int n) {

int r = row;
int c = col;

while(c>=0){
	if(board[r][c] == 'Q'){
		return false;
	}
	c--;
}

r=row;
c=col;
while(c>=0 && r>=0){
	if(board[r][c] == 'Q'){
		return false;
	}
	c--;
	r--;
}

r=row;
c=col;

while(c>=0 && r<n){
	if(board[r][c] == 'Q'){
		return false;
	}
	c--;
	r++;
}	

return true;
	
}

int solve(vector<string>&board,int n,int col){
	
	if(col == n){
		for(int i=0;i<n;i++){
		  for(int j=0;j<n;j++){
		  	cout<<board[i][j]<<" ";
		  }
		  cout<<endl;
		}
		cout<<endl<<endl;
		return 1;
	}
	 
	  int cnt = 0;
	for(int row  =0;row<n;row++){
	   
	  if(isSafe(board ,row ,col,n)){
	  	// processing
	  	 board[row][col] ='Q';
	  	 //recursive call
	  cnt =cnt+	 solve(board,n,col+1);
	  	 // backtracking
	  	 board[row][col] = '.';
	  	 
	  } 	
		
	}
	return cnt;
}

int main(){

int n =4;

vector<string>board(n);

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		board[i].push_back('.');
	}
}

int col = 0;

cout<<solve(board,n,col);

	return 0 ;
}
