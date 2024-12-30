#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;

int min(int a  , int b){
	
	return a>b?b:a;
}

bool isConvertible(string a , string b){
  
  if(a.length()!= b.length() || a.length() == 0 ){
  	return false;
  }
  
  int  cnt =0;
  for(int i=0;i<a.length();i++){
  	if(a[i]!=b[i]){ 
  		cnt++;
	  } 
  }  
   
  if(cnt==1){
  	return true;
	}
  else
  {
  	return false;
  }	
}

void solve(string src, string dest,unordered_map<string,bool>& visited, vector<string>&dict,
vector<vector<string>>&res,vector<string>&path,int &size)
{
	  
	  if( dest.compare(path[path.size()-1]) == 0 ){
	  	res.push_back(path);
	  	size = min(size,path.size());
	  	return ;
	  }
	 
	   for(auto word: dict){
	   	
	   	
	   	 if(isConvertible(src,word) && visited[word] == false){
	   	 	 
	   	 	 
	   	 	  // process
	   	 	 	path.push_back(word); 
	   	 	 	visited[word] = true; 
	   	 	 	 
	   	 	 	  // R.C
				 solve(word,dest,visited,dict,res,path,size);
				 
				 // backtracking
				path.pop_back();
				visited[word]=false; 
	   	 	 	 
				 }
				 
	   	 	 
			
			
	   }
	   return;
}
 
int main( ){

string beginWord = "hit";
string endWord ="cog";
vector<string>wordList ={"hot","dot","dog","lot","log","cog"};


unordered_map<string,bool>visited;
vector<vector<string>>res;

vector<string>path;
path.push_back(beginWord);  

int size = INT_MAX;
solve(beginWord,endWord,visited,wordList,res,path,size);
 

vector<vector<string>>finalAns;

for(auto i:res){
	
	if(i.size() == size){
		finalAns.push_back(i);
	}
}


 for(auto i:finalAns){
 	for(auto j:i){
 		cout<<j<<" ";
	 }
	 cout<<endl;
 }



	return 0 ;
}
