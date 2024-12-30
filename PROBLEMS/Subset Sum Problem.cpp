#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool helper(vector<int>&nums,int index,int sum,int cnt){
	
	if( (index<nums.size() && cnt>sum ) ||   (index>=nums.size() && cnt !=sum) ){
	return false;
}

if(index>=nums.size() && cnt==sum){
	return true;
}



bool left = helper(nums,index+1,sum,cnt+nums[index]);
//cnt-=nums[index];

bool right = helper(nums,index+1,sum,cnt);


return left || right;



	
	
	
	
}


void subset(vector<int>&nums,vector<int>output ,int index){
	
	if(index>=nums.size()){
		
		for(int i:output){
			cout<<i<<" ";
		}
		cout<<endl;
		return;
	}
	 int num = nums[index];
	 output.push_back(num);
	 subset(nums,output,index+1);
	 output.pop_back();
	
	
	subset(nums,output,index+1);
	 
	 
	 
	                   
}
int main(){
// 4+3+2               3, 34, 4, 12, 5, 2
vector<int>nums={1,2,3};
vector<int>output;

//subset(nums,output,0);
int sum = ;


if(helper(nums,0,sum,0 )){
	cout<<"EXIST"<<endl;
}
else{
	cout<<" does not exist"<<endl;
}



	return 0 ;
}
