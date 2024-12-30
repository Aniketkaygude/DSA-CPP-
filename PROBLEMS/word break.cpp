#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool helper(string s,vector<string>&w,unordered_map<string,bool>&v,int index)
{
	if(index>=s.size()){
		return true;
	}
	
	for(int i=index;i<s.size();i++){
	   
	   string str=s.substr(index,i+1);
	   
	   if(v[str] == 1 && helper(s,w,v,i+1)){
	   	return true;
	   }
	   	
	}
	
	return false;
	
}

int main(){
string s="applepenapple";
vector<string>w={"apple","pen"};
unordered_map<string,bool>v;

for(string i:w){
	v[i]=true;
}

cout<<helper(s,w,v,0);

	return 0 ;
}
