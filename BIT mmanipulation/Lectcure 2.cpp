#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void uniqueElement()
{
	vector<int>nums={1,2,2,3,1,3,4,5,4,11};
	int n=nums.size();
	
	int Xor=0;
	for(int i=0;i<n;i++){
		Xor=Xor^nums[i];
	}
	
	int cnt=0;
	
	while(Xor){
		
		if(Xor &1){
			break;
		}
		cnt++;
     	Xor=Xor>>1;
	}
	
	int Xor1 =0;
	int Xor2=0;
	
	for(int i=0;i<n;i++){
		if(nums[i]&(1<<cnt)){
			Xor1=Xor1^nums[i];
		}
		else{
			Xor2=Xor2^nums[i];
		}
	}
	
	cout<<Xor1<<"   "<<Xor2<<endl;
		
}

void subsets(){
	vector<int>nums={1,2,3};
	int n = nums.size();
	
	for(int i=0;i<(1<<n);i++){
		
		for(int j=0;j<n;j++){
			
			if(i &(1<<j)){
				cout<<nums[j ]<<" ";
			}
		}
		cout<<endl;
	}
	
}

int main(){
//uniqueElement();
subsets();
	return 0 ;
}
