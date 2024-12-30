#include<bits/stdc++.h>
using namespace std;


int helper(vector<int>nums, int i , int diff){
	
	if(i<0){
		return 0;
	}
	int ans =0;
	 for(int j =i-1;j>=0;j--){
	 	if(nums[i]-nums[j] == diff){
	 		ans= 1+helper(nums,j,diff);
		 }
	 }
	 return ans;
}

int main(){
	
    vector<int>nums = {20,1,15,3,10,5,8} ;// ans =4
	
    int ans = 0;

    for(int i =0;i<nums.size();i++){
    	
       	for(int j =i+1;j<nums.size();j++){
           int diff = nums[j] -nums[i];		   
		   ans =max(ans,2+helper(nums, i , diff));	 	
	}
      }
      
 
 cout<<" longest arithmetic sequence is -->"<<ans;     
	
}
