#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int mod = 1e9+7;

long long helper(int i, int n, int &delay , int &forget ,vector<long long int>&dp){
    if(i+delay>n){
        return 0;
    }

    if(dp[i]!=INT_MIN){
        return dp[i];
    }

    long long ans = 0;
    for(int j=i+delay;j<= min(n,i+forget-1);j++){
        long long temp=helper(j,n,delay,forget,dp);

        if(j+forget>n){
            temp++;
        }

        temp = temp%mod;
        ans = (ans+temp)%mod;
        
    }
    return dp[i]= ans;
}


    int peopleAwareOfSecret(int n, int delay, int forget) {

        vector<long long int>dp(n+1,INT_MIN);

        int ans = helper(1,n,delay,forget,dp);

        if(1+forget > n){
            ans++;
        }
        return ans;
        
    }

int main(){

cout<<peopleAwareOfSecret(6,2,4);
	return 0 ;
}
