 #include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


void print(vector<int> nums ,int index,int k,vector<int>&ans){
	
	if(index>nums.size() || k == 0){ 
	
	 for(int i:ans){
	 	cout<<i<<" ";
	 }	
	 return;
	}
	
	for(int i=0;i<nums.size() && nums[i]<=k;i++){
	ans.push_back(nums[i]);
	print(nums,i+1,k-nums[i],ans);
	ans.pop_back();
	}
	cout<<endl;
}

void print2(int k,vector<int>&ans){
	
	if(k == 0){
		for(int i:ans){
			cout<<i<<" ";
		}
		cout<<endl;
		return ;
	}
	
	if(k<0){
		return ;
	}
	
	
	
	ans.push_back(1);
	print2(k-1,ans);
	ans.pop_back();
	
		ans.push_back(2);
	print2(k-2,ans);
	ans.pop_back();
	
		ans.push_back(3);
	print2(k-3,ans);
	ans.pop_back();
	
		ans.push_back(4);
	print2(k-4,ans);
	ans.pop_back();
 
		
}


int main(){
	
	vector<int>nums={1,2,3,4};
	int k=4;
	
	vector<int>ans;
	print(nums,0,k,ans);
	
	cout<<endl<<endl;
	print2(k,ans);
	
}
