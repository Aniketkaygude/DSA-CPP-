#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool safe(vector<vector<int>>&nums,int curr,int prev){
	
	if(nums[curr][0] <=nums[prev][0] &&  
	nums[curr][1] <=nums[prev][1] && 
	nums[curr][2] <=nums[prev][2]     ){
		return true;
	}
	
	return false;
	
}


int helper(vector<vector<int>>&nums, int curr,int prev){
	
	if(curr<0){
		return 0;
	}
       
	 int pick=0;   	
    if(prev ==-1 || safe(nums,curr,prev)){
      	prev = nums[curr][2] + helper(nums,curr-1,curr);
	} 
	
	int notpick = 0;
    notpick=	helper(nums,curr-1,prev);
	
	return max(pick,notpick);
      
}


int main(){
// 190z

		  

	return 0 ;
}
