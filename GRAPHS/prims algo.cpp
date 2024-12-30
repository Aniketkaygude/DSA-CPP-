#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){

vector<pair<int,pair<int,int>>>edges= {
 
 {0,{1,2}} , {0,{3,6}},
 
  {1,{2,3}},{1,{4,5}},{1,{3,8}} ,
  
  {4,{2,7}} 

};

unordered_map<int,vector<pair<int,int>>>adj;

for(auto i:edges){
	int u=i.first;
	int v= i.second.first;
	int wt=i.second.second;
	
	adj[u].push_back({v,wt});
	adj[v].push_back({u,wt});
	
}


for(auto i:adj){
	cout<<i.first<<"-->  ";
	for(auto j:i.second){
		cout<<"[ "<<j.first<<" , "<<j.second<<" ] ,";
	}
	cout<<endl<<endl;
}
 
 
 int n=5;
vector<bool>mst(5,false);
vector<int>parent(5,-1);
vector<int>key(5,INT_MAX);

int src=0;


parent[src]=-1;
key[src]=0;

for(int i=0;i<5;i++){
 
 int mini = INT_MAX;
 int u;
 
 // find minimum node
 for(int v=0;v<n;v++){
 	
 	if(!mst[v] && mini>key[v]){
          u=v;
          mini=key[v];
	 }
 }
  
  // mark true
   mst[u]=1;
   
   // check its adjacent nodes
   for(auto n : adj[u]){
   	
   	int v=n.first;
   	int wt=n.second;
   	
   	if(mst[v] == 0 && wt<key[v] ){
   			parent[v]=u;
			key[v]=wt; 
	   }
   }
}


for(int i=0;i<parent.size();i++){
	cout<<i<<" parent-->  "<<parent[i]<<" wt --> "<<key[i]<<endl;
}


	return 0 ;
}










