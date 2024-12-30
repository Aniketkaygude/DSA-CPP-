#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int>nums={-1,0,1,2,-1,-4};

sort(nums.begin(),nums.end());

map<int,int>m;

for(int i:nums){
	m[i]++;
}


map<int,int>:: iterator i,j;

for(i=m.begin();i!=m.end();i++){
	
j=i;
j++;

int first =i->first;
for(j;j!=m.end();j++){

	
	
	
	
}
cout<<endl;	
}






	return 0 ;
}
