#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool solve(string a,string b , int i,int j)
{
	if(i==0 && j==0){
		return true;
	}
	if(i>0 && j==0){
		return false;
	}
	
	if(i==0 && j>0){
		for(int k = j-1;k>=0;k--){
			if(b[k]!='*'){
				return false;
			}
		}
		return true;
	}
	
	if(a[i-1] == b[j-1] || b[j-1]=='?'){
		return solve(a,b,i-1,j-1);
	}
	else if(b[j-1] == '*'){
		return solve(a,b,i,j-1)||solve(a,b,i-1,j);
	}
	else{
		return false;
	}
	
}

int main(){
string s = "aa";
string p = "*";

cout<<solve(s,p,s.size(),p.size() );

	return 0 ; 
}
