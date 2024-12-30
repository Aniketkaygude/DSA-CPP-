#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void findTheRange(vector<int>nums , int target,int &s, int &e){
	 int start=0;
	 int end=1;
	  
	 while(target>nums[end]){
	   int 	temp = end +1;
	 	end = end+((end-start)+1)*2;
	 	start=temp;
	 }
	 s= start;
	 e=end;
	 cout<<s<<"  "<<e<<endl;
	 
}

int main(){
	

 vector<int>nums(100000);

    for (int i = 0; i < 20; ++i) {
        nums[i] = i + 1;
    }

      
  
int s=0;
int e=0;
int target=9;
 findTheRange(nums,target,s,e);

while(s<=e){
	
	int mid = s+(e-s)/2;
//	cout<<" mid --> "<< arr[mid]<<endl;
	

	
	if(nums[mid]==target){
		cout<<nums[mid]<<endl;
		return 0;
	}
	
	if(nums[mid]>target){
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	
	
}

  
  

	return 0 ;
}




