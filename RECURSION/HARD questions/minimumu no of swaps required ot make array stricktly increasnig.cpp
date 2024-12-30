#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>&nums1 , vector<int>& nums2 , int prev1 , int prev2 , int index){
	
	if(index==nums1.size()){
		return 0;
	}
	
	int swap = INT_MAX;
	int noswap =INT_MAX;
	
	//noswap
	if(nums1[index] >prev1 && nums2[index]>prev2 ){
		noswap = 0+solve(nums1,nums2 , nums1[index],nums2[index] ,index+1);  
	} 
	
	// swap 
	
	if(nums1[index ]> prev2 && nums2[index]>prev1 ){
		swap = 1+solve(nums1,nums2 ,nums2[index] ,nums1[index],index+1);
	}
	
	return min(swap ,noswap); 
	
}

int main(){

vector<int>nums1 = {1,2,5,4};
vector<int>nums2 = {1,2,3,7};

cout<<" ans --> "<<solve(nums1 , nums2 , -1,-1,0);

	return 0 ;
}
