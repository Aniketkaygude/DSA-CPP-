#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int helper(string s1,string s2,int index1,int index2){
	
	if(index1>=s1.size() || index2>=s2.size()){
		return 0;
	}
	
	if(s1[index1]==s2[index2]){
		return 1+helper(s1,s2,index1+1,index2+1);
	}
	else{
		int left=helper(s1,s2,index1+1,index2);
		int right=helper(s1,s2,index1,index2+1);
		return max(left,right);
	}

	
}


int main(){

string s1="abcde";
string s2="ace";

cout<<helper(s1,s2,0,0 );
	return 0 ;
}
