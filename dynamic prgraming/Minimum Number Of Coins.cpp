#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int normalRec(vector<int>&coins, int amount){
	
	// base case
	if( amount == 0){
		return 0;
	}
	if(amount <0){
		return INT_MAX;
	}
	int mini = INT_MAX;
	
	for(int i =0;i<coins.size();i++){
		int ans = normalRec(coins , amount-coins[i]);
		if(ans !=INT_MAX){
			mini= min(mini , 1+ans);
		}
	}
	return mini;
}

int RecDp(vector<int>&coins , int amount , vector<int>&dp){
	
	if(amount == 0){
		return 0;
	}
	if(amount <0){
		return INT_MAX;
	}
	
	if(dp[amount]!=-1){
		return dp[amount];
	}
	
	int mini = INT_MAX;
	for(int i =0;i<coins.size();i++){
		int ans = RecDp(coins,amount-coins[i],dp);
		if(ans!=INT_MAX){
    		mini = min(mini ,1+ans);
		}
	}
	
	dp[amount] = mini;
	return dp[amount];
}


int tabulation(vector<int>&coins,int amount){
   
   vector<int>dp(amount+1 ,INT_MAX);
   dp[0] = 0;
   
   for(int i =1;i<=amount;i++){
   	
   	// i am trying to solve for every amount figure from 1 to amount
   	
   	for(int j =0;j<coins.size();j++){
   		
   		if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX){
   			dp[i] = min(dp[i] ,1+dp[i-coins[j]]);
		   }
	   }
   }
   
   if(dp[amount] == INT_MAX){
   	return -1;
   }
   return dp[amount];
}

int main(){

//Input: coins = [1,2,5], amount = 11
//Output: 3
//Explanation: 11 = 5 + 5 + 1
//Example 2:
//
//Input: coins = [2], amount = 3
//Output: -1
//Example 3:
//
//Input: coins = [1], amount = 0
//Output: 0
 
 
 vector<int>coins = {1,2,5};
 int amount = 11;
 
  int ans = normalRec(coins,amount);
  if(ans == INT_MAX){
  	ans = -1;
  }
  cout<<" answer by normal recurrsion --> "<<ans<<endl<<endl;
  
  
  
  // DYNAMIC PROGRAMING
  vector<int>dp(amount+1,-1);
  ans  = RecDp(coins,amount,dp);
  
if(ans == INT_MAX){
  ans =-1;
  }
  cout<<" answer by recurrsion  + Memoization --> "<<ans<<endl<<endl;
  
  
  
  
  
  // DP Tabulation
  dp.clear();

  cout<<" answer by recurrsion  + tabulation --> "<<tabulation(coins,amount)<<endl<<endl;

	return 0 ;
}
