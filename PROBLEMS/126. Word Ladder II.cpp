#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
string abc="abcdefghijklmnopqrstuvwxyz";
int cnt=0;

void helper(string b,string e,string path,vector<string>ans,int index,map<string,bool>m){
	
	if(m[b] == true){	
		path+=b; 
		
	}
	
	if(b==e){
		ans.push_back(path);
		return;
	}
	
	if(index>=b.size()){
		return;
	}
		if(cnt>=10){
		return;
	}
	
	
	for(int i=0;i<26;i++){
		b[index]=abc[i];
		cout<<b<<endl;
		cnt++;
		 helper(b,e,path,ans,index+1,m);
			
	}
	
	

	
}

int main(){

/*

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]

Output: [["hit","hot","dot","dog","cog"],["hit","hot","lot","log","cog"]]

Explanation: There are 2 shortest transformation sequences:
"hit" -> "hot" -> "dot" -> "dog" -> "cog"
"hit" -> "hot" -> "lot" -> "log" -> "cog"


*/

string  b = "hit";
 string e = "cog";
 
 vector<string>w = {"hot","dot","dog","lot","log","cog"};
 
 map<string,bool>m;
 
 for(auto i:w){
 	m[i]=1;
 }
 
 vector<string>ans;
 
 helper(b,e,"",ans,0,m);
 cout<<abc.size();
 
 for(string i:ans){
 	cout<<i<<"-> ";
 }
 
 
}
