#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;



int main(){
	vector<int>nums={5,1,1,2,3,5};
	sort(nums.begin(),nums.end());
	vector<int>ans;
	
	int curr=nums[0];
	int j=0;
	int n=nums.size();
	
	while(curr!=nums[n-1])
	{
		
		if(nums[j]-curr >0){
			ans.push_back(n-j);
			curr=nums[j];
		}
		 j++;
	}
      
	for(auto i:ans){
		cout<<i<<" ";
	}
	


	return 0 ;
}
