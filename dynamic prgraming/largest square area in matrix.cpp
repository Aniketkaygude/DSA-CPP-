#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<vector<int>>m,int i,int j,int &maxi){
	
	if(i>=m.size() || j>=m[0].size()){
		return 0;
	}
	
	int right = solve(m,i,j+1,maxi);
	int diagonal = solve(m,i+1,j+1,maxi);
	int down = solve(m,i+1,j,maxi);
	
	if(m[i][j] == 1){
		int ans = 1+min(right , min(down,diagonal));
		maxi = max(maxi,ans);
		return ans;
	}else{
		return 0;
	}
}

int RecMemo(vector<vector<int>>&m, int i, int j ,int &maxi ,vector<vector<int>>&dp)
{
	if(i>=m.size() || j>=m[0].size()){
		return 0;
	}
	
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	
	int right = RecMemo(m,i,j+1,maxi,dp);
	int diagonal = RecMemo(m,i+1,j+1,maxi,dp);
	int down =RecMemo(m,i+1,j,maxi,dp);
	
	if(m[i][j] == 1){
		
		dp[i][j] = 1+min(right,min(diagonal,down));
		maxi = max(maxi,dp[i][j]);
		return dp[i][j];
	}
	else{
		return dp[i][j] =0;
	}
	
}

int tabulation(vector<vector<int>> &m,int & maxi){
	
	vector<vector<int>>dp(m.size()+1,vector<int>(m[0].size()+1 , 0));
	
	int row = m.size()-1;
	int col = m[0].size()-1;
	
	for(int i =row;i>=0;i--){
		for(int j = col;j>=0;j--){
		 
		int right =dp[i][j+1];
       	int diagonal = dp[i+1][j+1];
     	int down =dp[i+1][j];
	
	if(m[i][j] == 1){
		
		dp[i][j] = 1+min(right,min(diagonal,down));
		maxi = max(maxi,dp[i][j]);
		
	}
	else{
	dp[i][j] =0;
	}	
			
			
		}
	}
	return dp[0][0];
	
}

int space(vector<vector<int>> &m,int & maxi){
		int row = m.size();
	int col = m[0].size();
	
	vector<vector<int>>dp(m.size()+1,vector<int>(m[0].size()+1 , 0));
	vector<int>curr(col+1,0);
	vector<int>next(col+1,0);
	

	for(int i =row-1;i>=0;i--){
		for(int j = col-1;j>=0;j--){
		 
		int right =curr[j+1];
       	int diagonal = next[j+1];
     	int down =next[j];
	
	if(m[i][j] == 1){
		
		curr[j] = 1+min(right,min(diagonal,down));
		maxi = max(maxi,curr[j]);
		
	}
	else{
	curr[j] =0;
	}	
		
		next = curr;	
			
		}
	}
	return dp[0][0];
	
}

int main(){

vector<vector<int>> m1={ {1,1},
                          {1,1}  };
     
vector<vector<int>>m2 = {{0,0},
                          {0,0}};
						  
vector<vector<int>> m3={ {1,1,1,1},
                          {1,1,1,1},
						  {1,1,1,1},
						  {1,1,1,1} };						  	                      

 
int maxi =0;
solve(m3,0,0,maxi);

cout<<" by normal recurrsion --> "<<maxi<<endl<<endl;


maxi =0;
vector<vector<int>> dp(m3.size(),vector<int>(m3[0].size(),-1));
cout<<" by Recurrsion + Memoization -->  "<<RecMemo(m3,0,0,maxi,dp)<<endl<<endl;

maxi = 0;
tabulation(m3,maxi);
cout<<"by tabulation --> "<<maxi<<endl<<endl;


maxi =0;
space(m3,maxi);
cout<<" space optimization --> "<<maxi;



	return 0 ;
}
