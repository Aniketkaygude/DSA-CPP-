#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


 int removeDuplicates(vector<int>& nums){
 int e = -100;
 
 vector<int>ans;
 for(int i = 0 ;i<nums.size() ; i++){
 	int cnt = 0;
 	for(int j  = i+1;j<nums.size();j++){
 		
 		if(nums[i] == nums[j]){
 			cnt++;
 			nums[j]=e;
		 }

	 }
	 if(cnt == 0 && nums[i]!=e || cnt>=1  && nums[i]!=e  ){
	 	ans.push_back(nums[i]);
	 }
 } 
 
	for(int i =0 ;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
 	
 }

int main(){
	
vector<int>arr = {0,0,1,1,1,2,2,3,3,4};	
	
	removeDuplicates(arr);
	
	
	
}








