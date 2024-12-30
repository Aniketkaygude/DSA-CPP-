#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(int a , int b,vector<vector<int>>dp){
	
	if(a==1 && b==1){
		return 0;
	}
	if(a==b || a%b ==   0 && b%a ==0){
		return 1;
	}
	if(dp[a][b]!=-1){
		return dp[a][b];
	}
	int ans1 = solve(a-1,b,dp);
	int ans2  =solve(a,b-1,dp);
		int ans3=0;
		int ans4=0;
	if(a%b==0)
	 ans3 = solve(a/b , b,dp);
     if(b%a==0)
	 ans4 = solve(a,b/a,dp);
	
	dp[a][b]= min(ans1 ,min(ans1 ,min(ans3,ans4)));
	return dp[a][b];
}


int main(){

int a =2;
int b =5;

vector<vector<int>>dp(a+b,vector<int>(a+b,-1));
cout<<solve(a,b,dp);

	return 0 ;
}
