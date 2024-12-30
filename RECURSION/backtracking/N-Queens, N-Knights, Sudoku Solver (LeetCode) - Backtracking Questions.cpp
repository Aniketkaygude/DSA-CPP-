#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;





void display(vector<vector<bool>>  board){
	
	for(int i = 0 ;i<board.size();i++){
		for(int j = 0 ; j<board[0].size();j++){
			if(board[i][j] == true){
				cout<<"Q ";	
			}
			else{
				cout<<"X ";
			}
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	/*
	for(auto i :board){
		for( auto j:i){
				if(j == true){
				cout<<" Q ";	
			}
			else{
				cout<<"X";
			}
		}
		cout<<endl;
	}*/
}


bool safe(vector<vector<bool>> &board,int row,int col){

// check vetical row
for(int i = 0 ;i<row;i++){
	if(board[i][col] == true){
		return false;
	}
}	

//diagonal left
int maxleft = min(row,col);
for(int i =1 ;i<=maxleft;i++){
	if(board[row-i][col-i] == true){
		return false;
	}
}

//diagonal right
int b = board.size() - col;
int maxright = min(row,b);
for(int i = 1;i<=maxright;i++){
	if(board[row-i][col+i]==true){
		return false;
	}
}

return true;
	
}



int queens(vector<vector<bool>> board,int row){
	
	if(row == board.size()){
		
		display(board);
		return 1;
	}
	
	int count = 0 ;
	
	//placing the quee and checking for every row and col
	 for(int col = 0 ;col<board[0].size(); col++){
	 	 
	 	 if(safe(board,row,col)){
	 	 	board[row][col] = true;
	 	 	count +=queens(board,row+1);
	 	 	board[row][col] = false;
		  }
	 	
	 }
	 
	 return count;
	
}



int main(){
	
	vector<vector<bool>> board(4,vector<bool>(4));
	
cout<<	queens(board,0);

}


