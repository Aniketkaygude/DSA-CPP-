#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int helper(vector<int>nums,int index){
	
	if(index>=nums.size()){
        return 0; 
	}
     
    for(int i=index+1;i<nums.size();i++){
      int first=nums[index];
	  	
		 if(nums[i]>nums[index]){    
			int pick=1+helper(nums,i+1);
			int notpick=helper(nums,i+1);
			return max(pick,notpick); 
		    
		 }  	
	  	 	

	} 
	
}

int main(){


vector<int>nums={10,9,2,5,3,7,101,18};

cout<<helper(nums,0);

	return 0 ;
}
