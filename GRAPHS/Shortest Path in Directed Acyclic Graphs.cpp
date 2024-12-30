#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

class graph{
 
 public:
 	
 	unordered_map<int,vector<pair<int,int>>>adj;
 	
 	
 	void adlist(int u,int v, int wt){
 		 adj[u].push_back({v,wt}); 
	 }
	 
	 void printadj(){
	 	for(auto i:adj){
	 		cout<<i.first<<" -->  ";
	 		for(pair<int,int> j:i.second){
	 			cout<<"( "<<j.first<<" , "<<j.second<<" )";
			 }cout<<endl;
		 }
	 }
	 
	 void dfs(int node,unordered_map<int,bool>&v,stack<int>&st){
	 	v[node]=true;
	 	for(auto i:adj[node]){
	 		int a=i.first;
	 		if(!v[a]){	
	 		v[a]=1;
	 		dfs(a,v,st);
	 		 }
		 }
		 
		 st.push(node);
	 }
	 
	 
	 void getShortestPath(int src,vector<int>&dist,stack<int>&st ){
	 
	 dist[src]=0;
	 
	 while(!st.empty()){
	 	int top=st.top();
	 	st.pop();
	 	
	 	if(dist[top]!=INT_MAX){
	 		
	 		for(auto i:adj[top]){
	 			
	 			if(dist[top]+i.second <dist[i.first]){
	 				dist[i.first]=dist[top]+i.second;
				 }
	 			
			 }
	 		
		 }
	 	
	 }	
	 	
	 }
	 	
};


int main(){

graph g;

vector<pair<int,pair<int,int>>>graphinputs={ {0,{1,5}},{0,{2,3}},{1,{2,2}},
                                             {1,{3,6}},{2,{3,7}},{2,{4,4}},
								             {2,{5,2}},{3,{4,-1}},{4,{5,-2}} 
								             
											 };
											 
		for(auto i:graphinputs)	{
		  int u = i.first;
		  int v=i.second.first;
		  int wt=i.second.second;
		  
		  g.adlist(u,v,wt);
		}		
		
		// print adjacency list
		 g.printadj();
		
		
		
		int n=6; // total number of nodes
		unordered_map<int,bool>v;
		stack<int>st;
		
		for(int i=0;i<n;i++){
			if(!v[i]){
				g.dfs(i,v,st);
			}
		}	
		
		/*
		cout<<endl<<endl<<"TOPOLOGICAL ORDER -->  ";
		while(!st.empty()){
			cout<<st.top()<<"  ";
			st.pop();
		}
		*/
		
		cout<<endl<<endl;
			
		int src=1;
		vector<int>dist(n,INT_MAX);
		
		dist[src]=0;
		
		g.getShortestPath(src,dist,st);		
		
		cout<<"answer is -->  ";
		
		for(int i:dist){
			cout<<i<<"  ";
		}		
	    							 
											 

	return 0 ;
}







