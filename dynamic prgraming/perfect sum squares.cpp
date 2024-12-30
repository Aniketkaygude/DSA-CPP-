#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int solve(int n){
	
	if(n == 0){
		return 0;
	}
	
	int ans = INT_MAX;
	
	for(int i =1;i*i<=n;i++){
		int temp =i*i;
		ans = min(ans,1+solve(n-temp));
	}
	return ans;
}

int RecMemo(int n ,vector<int>&dp){
	
	if(n == 0){
		return 0;
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int ans =n;
	 
	 for(int i =1;i*i<=n;i++){
	 	int temp = i*i;
	 	ans = min(ans,1+RecMemo(n-temp, dp));
	 }
	 dp[n]=ans;
	 return dp[n];
	
}

int tabulation(int n){
  
vector<int>dp(n+1,INT_MAX);

dp[0] =0;
  int ans = n;
   for(int i =1;i<=n;i++){
   	 
   	 for(int j=1;j*j<=n;j++){
   	 	int temp = j*j;
   	 	if(i-temp>=0){
   	 		dp[i] =min(dp[i] ,dp[i-temp]+1);
			}
		}
   }	

	 return dp[n];
	
}

int main(){
int n = 6;

//cout<<" by normal recurrsion --> "<<solve(n)<<endl<<endl;

vector<int>dp(n+1,-1);
cout<<" by recurrsion + Memoization--> "<<RecMemo(n,dp)<<endl<<endl;

cout<<" by tabulation --> "<<tabulation(n)<<endl<<endl;


	return 0 ;
}
