#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>&nums,int target){
	
	if(target ==0){
		return 1;
	}
	if(target <0){
		return 0;
	}
	
	int  ans =0;
	for(int i =0;i<nums.size();i++){
		ans+=solve(nums,target-nums[i]);
	}
	return ans;
}

int RecMemo(vector<int>&nums,int target, vector<int>&dp){
	
	if(target ==0){
		return 1;
	}
	if(target <0){
		return 0;
	}
	
	if(dp[target ]!=-1){
		return dp[target];
	}
	
	int  ans =0;
	for(int i =0;i<nums.size();i++){
		ans+=solve(nums,target-nums[i]);
	}
	dp[target] = ans;
	return dp[target];
}


int tabulation(vector<int>&nums ,int target){
	
	vector<int>dp(target+1,0);
	
	dp[0] = 1;
	
	//traversing from target 1 to target
	for(int i =1;i<=target;i++){
		// traversing on num vector
		for(int j =0;j<nums.size();j++){
			if(i-nums[j]>=0){
				dp[i]+=dp[i-nums[j]];
			}
			
		}
	}
	return dp[target];
	
}
int main(){

vector<int>nums ={1,2,5};
int target = 5;

cout<<" by normal recurrsion --> "<<solve(nums,target)<<endl<<endl;

vector<int>dp(target+1,-1);
cout<<"by recursion the memoization -->  "<<RecMemo(nums,target,dp)<<endl<<endl;

cout<<"by tabulation -->  "<<tabulation(nums,target)<<endl<<endl;

//cout<<"by space -->  "<<tabulation(nums,target)<<endl<<endl;
	return 0 ;
}
