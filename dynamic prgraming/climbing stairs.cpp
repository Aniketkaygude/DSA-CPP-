#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int climbingstairs(int n , vector<int>&dp){

 if(n<0){
            return 0;
        }

        if(n==0){
            return 1;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]= climbingstairs(n-1,dp)+climbingstairs(n-2,dp);
        return dp[n];
        
    }

int tabulation(int n , vector<int>& dp){
	  
	 dp[0] =1;
	  
	  for(int i =2;i<n;i++){  	
	  	dp[i] = dp[i-1]+dp[i-2];
	  }
	  return dp[n];
}

int space(int n){
	
	int prev1=1;
	int prev2 =1;
	
	for(int i =2;i<=n;i++){
	 int curr = prev1 +prev2;
	  
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

 // recursion + memoization
 cout<<" by recursion and memoization --> ";
  cout<<climbingstairs(n,dp)<<endl<<endl;
  
  //  tabulation
  cout<<" by tabulation --> ";
  cout<<tabulation(n,dp)<<endl<<endl;
  
  cout<< " by space optimization --> ";
  cout<<space(n);
	return 0 ;
}
