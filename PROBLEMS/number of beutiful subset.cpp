#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


void helper(vector<int>&nums,vector<int>ans,int index,int k){
	
	if(index>=nums.size()){
		
		for(int i:ans){
		cout<<i<<"  ";
		}
		cout<<endl;
		return;
			}
			
	    ans.push_back(nums[index]);		
		helper(nums,ans,index+1,k);
		ans.pop_back();
		
		helper(nums,ans,index+1,k);	
}


int main(){
vector<int>nums={2,4,6};
vector<int>ans;
int k=2;

helper(nums,ans,0,k);


	return 0 ;
}
