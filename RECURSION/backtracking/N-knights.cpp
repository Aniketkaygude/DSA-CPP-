#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void display(vector<vector<bool>> & board){
	
	for(int i = 0 ;i<board.size();i++){
		for(int j = 0 ; j<board[0].size();j++){
			if(board[i][j] == true){
				cout<<"K ";	
			}
			else{
				cout<<"X ";
			}
		}
		cout<<endl;
	}
	cout<<endl<<endl;

}

bool valid(vector<vector<bool>> &board,int row,int col){
	if(row>=0 && row< board.size() && col<board[0].size() ){
		return true;
	}
	return false;
}

bool safe(vector<vector<bool>> &board,int row,int col){
	
	if(valid(board,row-2,col-1)){
		if(board[row-2][col-1]){
			return false;
		}
		
	}
	
		if(valid(board,row-1,col-2)){
		if(board[row-1][col-2]){
			return false;
		}
		
	}
	
	
	if(valid(board,row-2,col+1)){
		if(board[row-2][col+1]){
			return false;
		}
		
	}
	
	
	if(valid(board,row-1,col+2)){
		if(board[row-1][col+2]){
			return false;
		}
		
	}
	
	return true;
}

int knight(vector<vector<bool>> &board,int row,int col  , int target){

if(target == 0){
	display(board);
	return 1;
}

int count =  0;

if(row == board.size()-1 && col == board[0].size()){
	return 0;
}

if(col == board[0].size()){
	return knight(board,row+1,0,target);
}

if(safe(board,row,col)){
	board[row][col] = true;
	count+= knight(board,row,col+1,target-1);

		board[row][col] = false;
}
 return  knight(board,row,col+1,target);

return count;
}


int main(){
	vector<vector<bool>> board(4,vector<bool>(4));
	
cout<<	knight(board,0,0,4);

	return 0 ;
}
