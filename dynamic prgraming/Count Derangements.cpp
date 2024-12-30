#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define MOD 1000000007


long long int countDerangements(int n){
	
	//base
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	int ans = (  ((n-1)%MOD)* ((countDerangements(n-1)%MOD) 
	                         +(countDerangements(n-2)%MOD)) %MOD  );
	         
			return ans;                 
}


long long int RecMemo(int n,vector<long long int >&dp){
	
	//base
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}
	long long int  ans = (  ((n-1)%MOD)* ((countDerangements(n-1)%MOD) 
	                         +(countDerangements(n-2)%MOD)) %MOD  );
	    
		dp[n] =ans;      
			return dp[n];                 
}

int tabulation(int n){
	vector<long long int >dp(n+1,0);
	
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<=n;i++){
		
		long long int first = dp[i-1]%MOD;
		long long int second = dp[i-2]%MOD;
		long long int sum = first+second;
		
		long long int ans = ((i-1)*sum)%MOD;
		dp[i]=ans;
	}
	return dp[n];
}

int space (int n){
	 
long long	int prev1=1;
long long	int prev2=0;

 for(int i=3;i<=n;i++){
 		long long int first = prev1%MOD;
		long long int second = prev2%MOD;
		long long int sum = first+second;
		
		long long int ans = ((i-1)*sum)%MOD;
		prev2=prev1 ;
		prev1 = ans;
 } 
 return prev1;
	
}

int main(){

 int n ;
 cout<<"enter num   to count derangementes --> ";
 cin>>n;
 
 
// cout<<"\n \n by normal recursion --> "<<countDerangements(n)<<endl<<endl;
 
 vector<long long int >dp(n+1,-1);
 cout<<" by Recursion the memoization--> "<< RecMemo( n , dp)<<endl<<endl;
 
 cout<<" by tabulation --> "<<tabulation(n)<<endl<<endl;
 
  cout<<" by space optimization --> "<<space(n)<<endl<<endl;
	return 0 ;
}
