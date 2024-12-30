 #include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int getRemovalCount(string s){
	
	stack<char>st;
	
	for(int i=0;i<s.size();i++){
	    char ch = s[i];
		if(ch == '('){
			st.push(ch);
		}
		else if(ch ==')'){
			if(!st.empty() && st.top() == '('){
				st.pop();
			}
			else{
				st.push(')');
			}
		}	
	}
	return st.size();
	
}

void solve(string s,int removecnt,vector<string>&ans,map<string,bool>&m)
{
	 if(m[s]== true){
	 	return;
	 }
	 else{
	 	m[s]=true;
	 }
	  
	 if(removecnt==0){
	 	 // again checkfor validity
	 	 int numremoval = getRemovalCount(s);
	 	 if(numremoval == 0){
	 	 	ans.push_back(s);
	 	 	return;
		  }
	 }
	 
	 for(int i=0;i<s.size();i++){
	 	
	 	if(s[i]=='(' || s[i] ==')'){
		 
	 	string leftstr = s.substr(0,i);
	 	string rightstr = s.substr(i+1);
	 	string temp = leftstr+rightstr;
	 	solve(temp,removecnt-1 ,ans,m);
	 	}
	 }
	  
}

int main(){

string s = "()())()";

int removecnt = getRemovalCount(s);
vector<string>ans;
map<string ,bool>m;
solve(s,removecnt,ans,m);

for(string i:ans ){
	cout<<i<<endl;
}



	return 0 ;
}
