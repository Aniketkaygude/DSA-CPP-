#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>&v,int i,int j){
	 
	if(i+1 == j){
		return 0;
	}
	int ans = INT_MAX;
	
	for(int k =i+1;k<j;k++){
		ans = min(ans,v[i]*v[j]*v[k]+solve(v,i,k)+solve(v,k,j));
	}
	return ans;
}

int RecMemo(vector<int>&v,int i,int j, vector<vector<int>>&dp){
	 
	if(i+1 == j){
		return 0;
	}
	
	if(dp[i][j] !=-1){
		return dp[i][j];
	}
	
	int ans = INT_MAX;
	
	for(int k =i+1;k<j;k++){
		ans = min(ans,v[i]*v[j]*v[k]+RecMemo(v,i,k,dp)+RecMemo(v,k,j,dp));
	}
	dp[i][j] = ans;
	return dp[i][j];
}

int tabulation(vector<int>&v,int i,int j ){
	 int n  = v.size();
	 vector<vector<int>>dp(v.size(),vector<int>(v.size(),-1));
	 
    
    for(int i = n-1;i>=0;i--){
    	for(int j =i+2;j<n;j++){
    		
    		int ans = INT_MAX;
	
	for(int k =i+1;k<j;k++){
		ans = min(ans,v[i]*v[j]*v[k]+dp[i][k]+dp[k][j]);
	}
	dp[i][j] = ans;

		}
	}
	 	return dp[0][v.size()-1];
	
}


int main(){

vector<int>v={3,7,4,5};

cout<<"by normal recursiom --> "<<solve(v,0,v.size()-1)<<endl<<endl;

vector<vector<int>>dp(v.size(),vector<int>(v.size(),-1));
cout<<"by recurrsion + Memoization --> "<<RecMemo(v,0,v.size()-1,dp)<<endl<<endl;

cout<<"by tabulation --> "<<tabulation(v,0,v.size()-1)<<endl<<endl;

	return 0 ;
}
