#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int helper(vector<int>nums,vector<int>&path,int index,int k){
	
	if(index>=nums.size() || k==0){
		
		for(int i:path){
			cout<<i<<"  ";
		}
		cout<<endl;
		
		if(k==0 && ( (path[0]+path[1] >path[2]) &&(path[0]+path[2] >path[1])&&(path[2]+path[1] >path[0])  ) ){
			return 1;
		}
		return 0;
	}
	
	
	int cnt=0;
	for(int i=index;i<nums.size();i++){
		path.push_back(nums[i]);
		cnt+=helper(nums,path,i+1,k-1);
		path.pop_back();
	}
	return cnt;
	
	
}



int helper2(vector<int>nums,vector<int>&path,int index,int k){
	
	if(index>=nums.size() || k==0){
		
		for(int i:path){
			cout<<i<<"  ";
		}
		cout<<endl;
		
		if(k==0 && ( (path[0]+path[1] >path[2]) &&(path[0]+path[2] >path[1])&&(path[2]+path[1] >path[0])  ) ){
			return 1;
		}
		return 0;
	}
	
	
	int cnt=0;
	for(int i=index;i<nums.size();i++){
		path.push_back(nums[i]);
		
		cnt+=helper2(nums,path,index+1,k-1);
		path.pop_back();
	}
	cout<<"index --> "<<index<<endl;
	return cnt;
	
	
}



int main(){

vector<int>nums={2,2,3,4};

vector<int>path;

//int c=helper(nums,path,0,3);


int c=helper2(nums,path,0,3);
cout<<"\n ans -> "<<c<<endl<<endl;



}
