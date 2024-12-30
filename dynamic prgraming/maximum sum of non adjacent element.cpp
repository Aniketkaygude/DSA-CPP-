#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int Rec(vector<int>&nums,int n){
	 
	 if(n <0){
	 	return 0;
	 }
	 
	 if(n ==0){
	 	return nums[0];
	 }
	
	 
	 int include = nums[n]+Rec(nums,n-2);
	 int exclude= 0+Rec(nums,n-1);
	 
	 return max(include,exclude);
	
}

int RecMemo(vector<int>&nums,int n , vector<int>&dp){
	 
	 if(n <0){
	 	return 0;
	 }
	 if(n == 0){
	 	return nums[0];
	 }
	 
	if(dp[n]!=-1){
		return dp[n];
	}
	 
	 int include = nums[n]+Rec(nums,n-2);
	 int exclude= 0+Rec(nums,n-1);
	 
	 dp[n]= max(include,exclude);
	return dp[n];
}

int tabulation(vector<int>&nums){
	int n = nums.size();
	vector<int>dp(n+1 ,-1);
	
	dp[0] =nums[0];
	 
	 for(int i =2;i<n;i++){
	 	int include = dp[i-2]+nums[i];
	 	int exclude = dp[i-1]+0;
	 	 dp[i] = max(include,exclude);
	 }
	 
	 return dp[n-1];
	   
}

int space(vector<int>&nums){
	int n = nums.size();

	
int prev1 =nums[0];
int  prev2 = 0;
	 
	 for(int i =1;i<n;i++){
	 	int include = prev2+nums[i];
	 	int exclude = prev1+0;
	 	 int curr = max(include,exclude);
	 	 
	 	 prev2 = prev1;
	 	 prev1 = curr;
	 }
	 
	 return prev1;
	   
}


int main(){

/*
Example 1:
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
*/


vector<int>nums={2,7,9,3,1};

 
cout<<" by normal recursion --> "<< Rec(nums, nums.size()-1)<<endl;


// by Recursion + memoization

vector<int>dp(nums.size()+1,-1);

cout<<" by Recursion + memoization "<<RecMemo(nums,nums.size()-1,dp)<<endl<<endl;

// by Recursion + tabulation

cout<<" by tabulation "<<tabulation(nums)<<endl;

cout<<" by space optimization "<<space(nums)<<endl;


}
