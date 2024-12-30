#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool helper(string s,string p,int index1,int index2)
{
	if( index1 <0 && index2<0){
		return true;
	}
	
	if(index1<0  && index2>0  ){
   
	     for(int i=index2;i>=0;i--){
	     	if(p[index2]!='*'){
	     		return false;
			 }
		 }
		 return true;
	}	
	if(s[index1]!=p[index2] && p[index2]!='*' && p[index2]!='?'){
		return false;
	}
	 
	if(s[index1] == p[index2]){
		return helper(s,p,index1-1,index2-1);
	} 	
	else if(p[index2] =='?')  {
		return helper(s,p,index1-1,index2-1);
	}
		
	else if(p[index2]=='*'){
	     	 
	  bool include = helper(s,p,index1-1,index2);
	  bool exclude = helper(s,p,index1,index2-1);
	  return include || exclude;
	
	}
	
	
	
}

int main(){

string s="cb";
string p="??";

cout<<helper(s,p,s.size()-1,p.size()-1);

	return 0 ;
}
