#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;

bool solve(vector<int>&nums,vector<int>&quantity, unordered_map<int,int>& v,int index)
{
	if(index == quantity.size()){
		return true;
	}
	
	for(auto i = v.begin();i!= v.end(); i++){
		
		if( quantity[index] <= (*i).second){
			
			v[(*i).first]=v[(*i).first]-quantity[index];
			bool agekaAns = solve(nums,quantity,v,index+1); 
			
			if(agekaAns == true){
				return true;
			}
				v[(*i).first]=v[(*i).first]+quantity[index];
			  
		} 
		 
	}
	return false;
}

int main(){
	
vector<int>nums = {1,1,2,2,1, 1};
vector<int>quantity = {2,2,2};

unordered_map<int,int>v;
for(int i:nums){
	v[i]++;
}
sort(quantity.begin(),quantity.end(),greater<int>());
cout<<solve(nums,quantity,v,0);

	return 0 ;
}
