#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>nums , int index ,int prev){
	
	if(index >=nums.size()){
		return 0;
	}
	
	int pick =0;
	if(prev == -1 || nums[index]>nums[prev]){
		pick = 1+ solve(nums,index+1,index);
	}
	
	int notpick = 0;
	notpick=solve(nums,index+1,prev); 
	
	return max(pick ,notpick);
}

int LisUsingBinarySearch(vector<int>nums){
 
 int len=0;
 vector<int>ans;
 ans.push_back(nums[0]);
 len++;
 
 for(int i=1;i<nums.size();i++){
 	
 	if(nums[i] >ans.back()){
 		ans.push_back(nums[i]);
 		len++;
	 }
	 else{
	 	int index = lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
	 	ans[index]=nums[i];
	 }
 }
 return len;
 	
} 

int main(){

vector<int>nums={ 10 ,9,2,5,3,7,101,18};
int prev =-1;
cout<<" longest incresing subsequence "<<solve(nums,0,prev)<<endl;
cout<<"\nlongest increasing subsequence using binary search --> "<<LisUsingBinarySearch(nums);

	return 0 ;
}
