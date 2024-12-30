#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int>A ={2,3,1} ;
vector<int>B ={3,1,2};

unordered_map<int,int>m2;

vector<int>ans;



for(int i=0;i<B.size();i++){
	m2[B[i]]=i;
}



for(int i=A.size()-1;i>=0;i--){
	int cnt=0;
	
	 int j=i;
	 
	 while(j>=0){
	 	if(m2[A[j]]<=i ){
	 		cnt++;
		 }
		 j--;
	 }
	 ans.push_back(cnt);
}

for(int i:ans){
	cout<<i<<" ";
}



	return 0 ;
}
