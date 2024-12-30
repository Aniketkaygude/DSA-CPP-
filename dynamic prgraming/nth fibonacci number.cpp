#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int fib(int n , vector<int>&dp){
	if(n==1|| n==0){
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	
	dp[n] = fib(n-1,dp)+fib(n-2,dp);
	return dp[n];
}

int tabulation(int n  , vector<int>&dp){
	
	dp[0]=0;
	dp[1]=1;
	for(int i =2;i<n;i++){
		dp[i] =dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int space(int n){
	int prev1= 1;
	int prev2=0;

	
	if(n == 0){
		return prev2;
	}
	
	for(int i =2;i<=n;i++){
	  int curr = prev1+prev2;
	  
	  prev2 =prev1;
	  prev1 = curr; 
	}
	return prev1;
	
}
int main(){

int n;
cout<<"enter the fib num you want --> ";
cin>>n;
cout<<endl;

vector<int>dp(n+1,-1);

cout<<" by recursion + memoization --> ";
 cout<<fib(n,dp)<<endl<<endl;
 
 cout<< " by tabulation --> ";
 cout<<tabulation(n,dp)<<endl<<endl;
 
 cout<<" by space optimization --> ";
 cout<<space(n);
 
 
	return 0 ;
}
