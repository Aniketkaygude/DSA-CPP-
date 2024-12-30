#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;



void  die(vector<int>nums,string&path,int index,int k){
	if(index>nums.size() ||k == 0){
		    	  if(k==0){
		  	cout<<path<<endl;
		  }					
			return;
	}
	
	for(int i=0;i<nums.size() ;i++){
		
		if(nums[i]<=k)
		{
		
		path+=to_string(nums[i]);
		die(nums,path,i+1,k-nums[i]);
		path.pop_back();
		}
	}				
}


void  Uniquedie(vector<int>nums,string&path,int index,int k){
	if(index>=nums.size() ||k == 0){
		    	  if(k==0){
		  	cout<<path<<endl;
		  }					
			return;
	}
	
	for(int i=index;i<nums.size() && nums[i]<=k;i++){
		path+=to_string(nums[i]);
		Uniquedie(nums,path,index+1,k-nums[i]);
		path.pop_back();
	}
			
}
	


int main(){

vector<int>nums={1,2,3,4,5,6};
string path="";
int k=4;
die(nums,path,0,k);

	return 0 ;
}
