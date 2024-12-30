#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int solve(vector<int>nums, int i ,int j){
	 
	 if(i>j){
	 	return 0;
	 }
	 
	 if(i == j){
	 	return nums[i];
	 }
	 int score1 = nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
	 int score2 = nums[j]+min(solve(nums,i,j-2),solve(nums,i+1,j-1));
	 
	 return max(score1,score2);
	
}

int main(){

vector<int>nums ={1,5,233,7}; // 1,5,233,7

int i =0;
int j = nums.size()-1;
 
int p1 = solve(nums,i,j);
int sum  =0;
for(int i:nums){
	sum+=i;
}
 

 if(p1 >= sum-p1){
 	cout<<" p1 is the winner"<<endl;
 }
 else{
 	cout<<"p2 is the winner"<<endl;
 }
	return 0 ;
}
