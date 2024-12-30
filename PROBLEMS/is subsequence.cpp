#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool helper(string s , string t,int index1,int index2){
	
	if(index1>=s.size()){
		return true;
	}
	
	if(index2>=t.size()){
		return false;
	}
	
	if(s[index1]==t[index2]){
		return helper(s,t,index1+1,index2+1);
	}
	else{
		return helper(s,t,index1,index2+1);
	}
	
	

}

int main(){

string s="abe";
string t="ahbgdc";
cout<<helper(s,t,0,0);


	return 0 ;
}
