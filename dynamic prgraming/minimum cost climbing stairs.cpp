#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int solve(vector<int>cost,int i , vector<int>&dp){
	
	if(i >= cost.size()){
		return 0;
	}
	if(i == cost.size()-1){
		return cost[i];
	}
	
	dp[i] = cost[i]+min(solve(cost,i+1,dp) , solve(cost , i+2,dp));
	
	return dp[i];
}

int tabulation(vector<int>cost, int n){
	vector<int>dp(n+1);
	dp[0] = cost[0];
	dp[1] =cost[1];
	
	for(int i =2;i<cost.size();i++){
	    
	dp[i] = cost[i]+min(dp[i-1],dp[i-2]);
	}
	return min (dp[n-1] , dp[n-2]);
}

int space(vector<int>cost){
	int n = cost.size();
	int prev1 = cost[1];
	int prev2 = cost[0];
	
	for(int i = 2;i<n;i++){
	 
	 int curr = cost[i]+min(prev1 ,prev2) ;
	 prev2 = prev1;
	 prev1= curr;	
	   
	}
	return min(prev1,prev2);
}

int main(){
    
//    Input: cost = [10,15,20]
//Output: 15
//
//Input: cost = [1,100,1,1,1,100,1,1,100,1]
//Output: 6
 
 vector<int>cost = {1,100,1,1,1,100,1,1,100,1};
 vector<int>dp(cost.size()+1 , -1); 
 cout<<" by recursion and memoization --> "<<  min( solve(cost ,0 , dp) , solve(cost,1 , dp))<<endl<<endl;
 cout<<" by tabulation --> "<<tabulation(cost,cost.size())<<endl<<endl;
 cout<<" by space optimization "<<space(cost);
  
	return 0 ;
}
