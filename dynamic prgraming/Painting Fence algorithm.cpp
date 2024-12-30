#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
 
 #define MOD 1000000007
 
int add(int a, int b){
	return (a%MOD + b%MOD)%MOD;
}

int mul(int a,int b){
	return ((a%MOD)*1LL *(b%MOD))%MOD;
}

int solve(int n ,int k){
	
	if(n == 1){
		return k;
	}
	
	if(n == 2){
		return add(k,mul(k,k-1));
	}
	
	int ans = add(mul(solve(n-2,k) ,k-1) , mul(solve(n-1,k),k-1));
	return ans;
}

int RecMemo(int n ,int k,vector<long long int>&dp){
	
	if(n == 1){
		return k;
	}
	
	if(n == 2){
		return add(k,mul(k,k-1));
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int ans = add(mul(RecMemo(n-2,k,dp) ,k-1) , mul(RecMemo(n-1,k,dp),k-1));
	dp[n] =ans;
	return dp[n];
}

int tabulation(int n ,int k){
	
	vector<long long int>dp(n+1,k);
	 
	 dp[1] = k;
	 dp[2]=add(k,mul(k,k-1));
	 
	 for(int i =3;i<=n;i++){
	 	int a = mul(dp[i-2],k-1) ;
	 	int b = mul(dp[i-1],k-1);
	 	int ans=add(a,b);
	    dp[i]=ans;
	 }
	 return dp[n];	
}

int space (int n,int k ){	
	 long long int prev2 = k;
	 long long int prev1 =add(k,mul(k,k-1));
	 
	 for(int i =3;i<=n;i++){
	 	int a = mul(prev2,k-1) ;
	 	int b = mul(prev1,k-1);
	 	int ans=add(a,b);
	   prev2 = prev1;
	   prev1 = ans;
	 }
	 return prev1;
	
}

int main(){
/* 
Ninja has given a fence, and he gave a task to paint this fence.
 The fence has 'N' posts, and Ninja has 'K' colors.
 Ninja wants to paint the fence so that not more than two adjacent posts have the same color.
*/

int N =2; // 4 ,1,3
int K = 4; // 2,1,2

cout<<"by normal recursion --> "<<solve(N,K)<<endl<<endl;

vector<long long int>dp(N+1,-1);
cout<<"by recursion + MEMOIZATION --> "<<RecMemo(N,K,dp)<<endl<<endl;

cout<<"by tabulation --> "<<tabulation(N,K)<<endl<<endl;
cout<<"by space optimization  --> "<<space(N,K)<<endl<<endl;
	return 0 ;
}



