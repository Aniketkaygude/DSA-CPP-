#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

 int meom (int n,vector<int>&dp){
 	
 	    if(n<=1){
            return 1;
        }
        
		if(dp[n]!=-1){
			return dp[n];
		} 
         
        int ans =0;
    
        for(int i=1;i<=n;i++){
            ans = ans+ meom(i-1,dp)*meom(n-i,dp);
        }
        
        dp[n]=ans;
        return dp[n];
 	
 }

  int numTrees(int n) {
        
        if(n<=1){
            return 1;
        }

        int ans =0;
        for(int i=1;i<=n;i++){
            ans = ans+ numTrees(i-1)*numTrees(n-i);
        }
        return ans;
    }

int main(){
int n=3;
cout<<numTrees(n)<<endl;


vector<int>dp(n+1,-1);
cout<<meom(n,dp);
	return 0 ;
}
