#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(int n , int x ,int y, int z){
	
	if(n == 0){
		return 0;
	}
	
	if(n<0){
		return INT_MIN;
	}
	
	int a = solve(n-x , x,y,z)+1;
	int b = solve(n-y,x,y,z)+1;
	int c = solve(n-z,x,y,z)+1;
	
	return max(a,max(b,c));
}

int RecMemo(int n,int x,int y,int z ,vector<int>&dp){
	
	if(n == 0){
		return 0;
	}
	if(n<0){
		return INT_MIN;
	}
	 
	if(dp[n]!=-1){
		return dp[n];
	} 
	 
	int a = solve(n-x , x,y,z)+1;
	int b = solve(n-y,x,y,z)+1;
	int c = solve(n-z,x,y,z)+1;
	
	dp[n] = max(a,max(b,c));
	return  dp[n];
}

int tabulation(int n , int x, int y  ,int z){
	
	vector<int>dp(n+1,-1);
	dp[0]= 0;
	
	for(int i=1;i<=n;i++){
	  
	  if(i-x >=0 && dp[i-x]!=-1){
	  	dp[i] = max(dp[i],dp[i-x]+1);
	  }
	  
	  if(i-y>=0 && dp[i-y]!=-1){
	  	dp[i] = max(dp[i],dp[i-y]+1);
	  }
	  
	  if(i-z>=0 && dp[i-z]!= -1){
	  	dp[i]=max(dp[i],dp[i-z]+1);
	  }
	  
	}
	if(dp[n]<0){
		return 0;
	}
	return dp[n];
}





int main(){
int n = 7;  // n = length of rod


//segments
int x =5;
int y = 2;
int z = 2;
 
int ans = solve(n,x,y,z);

if(ans <0){
	ans = -1;
}
cout<<" by normal recursion --> "<<ans<<endl<<endl;


// dp memoization
 vector<int>dp(n+1,-1);
cout<<" by recursion + MEMOIZATION--> "<<RecMemo(n,x,y,z,dp)<<endl<<endl;

// tabulation 
cout<<"by Tabulation --> "<<tabulation(n,x,y,z)<<endl<<endl;

	return 0 ;
}
