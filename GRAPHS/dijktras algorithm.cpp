#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

class graph{
	public:
  
  
  // adjacency list
  unordered_map<int,vector<pair<int,int>> >adj;
  void addEdge(int u,int v,int wt){
  	 adj[u].push_back({v,wt});
  }		
  
  // Printing adjacency list
  
  void print(){
  	 for(auto i:adj){
  	 	cout<<i.first<<" --> ";
		  for(pair<int,int> j:i.second){
		  	cout<<"[ "<<j.first<<" , "<<j.second<<" ]  ";
		  }	 
		  cout<<endl<<endl;
	   }
  }
  
  
  void minDist( int src,vector<int>&dist,set<pair<int,int>>&st){
  	
while(!st.empty()){

// fetch top record

auto top = *(st.begin());

int nodeDistance=top.first;
int  topNode=top.second;

//remove top record now
st.erase(st.begin());

// traverse on neighbours
for(auto neighbour :adj[topNode]){
	if(nodeDistance + neighbour.second <dist[neighbour.first]){	 
	 
	  auto record = st.find({dist[neighbour.first],neighbour.first});
	  
	  if(record !=st.end()){
	  	st.erase(record);
	  }
	  
	  // distance update
	  
	  dist[neighbour.first] = nodeDistance+neighbour.second ;
	  // record push in set
	  
	  st.insert({dist[neighbour.first] ,neighbour.first});
	 	
	}
	
}

	
}
  }
  
 
		
};


int main(){

graph g;
 
    vector<pair<int, pair<int, int>>> graphinputs = {
        {0,{1,7}}, {0,{2,1}}, {0,{3,2}},
        {1,{0,7}}, {1,{2,3}}, {1,{3,5}}, {1,{4,1}},
        {2,{0,1}}, {2,{1,3}},
        {3,{0,2}}, {3,{1,5}}, {3,{4,7}},
        {4,{1,1}}, {4,{3,7}}
    };

for(int i = 0; i < graphinputs.size(); i++) {
    int u = graphinputs[i].first;
    int v = graphinputs[i].second.first;
    int wt = graphinputs[i].second.second;
    g.addEdge(u, v, wt);
}

g.print();


int n=5;
int src=0;
vector<int>dist(n,INT_MAX);
dist[src]=0;

set<pair<int,int>>st;
st.insert({0,src});


g.minDist(src,dist,st);

cout<<endl<<endl;

for(int i :dist){
	cout<<i<<" ";
}




	return 0 ;
}
