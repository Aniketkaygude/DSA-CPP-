#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int removeDuplicates(vector<int>& nums){

int K =0;
for(int j = 0 ;j<nums.size();j++){
	if(nums[K]!=nums[j]){
		K++;
	}
	nums[K]=nums[j];
}

for(int i = 0 ;i<K+1;i++){
	cout<<nums[i]<<"  ";
}

}

int main(){
	
vector<int>arr = {0,0,1,1,1,2,2,3,3,4};	
	
	removeDuplicates(arr);
	
	
	
}
