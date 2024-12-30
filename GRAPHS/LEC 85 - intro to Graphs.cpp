#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class graph{
	public:
		
	unordered_map<int , list<int>>adj;
	
	void addEdge(int u , int v , bool direction){
		// direction == 0  --->undirected graph
		// direction == 1  --->directed graph
		// u,v edges
		
		// create an edge from u to v
		adj[u].push_back(v);
		
		
		if(direction == 0){
			
			adj[v].push_back(u);
		}
		
	}
	
	void print(){
		
		for(auto i:adj){ 
			cout<<i.first<<"--> ";
			for(auto j:i.second){
				cout<<j<<" ,";
			}
			cout<<endl;	
		}	
	}	
		
		
};


int main(){
	
	graph g;
	int n,m;
	
	cout<<" enter the number of nodes --> ";
//	cin>>n;
	
	cout<<" enter the number of edges --> ";
	cin>>m;
	
	for(int i = 0;i<m;i++){
		int u,v;
		cin>>u>>v;
		g.addEdge(u,v,0);
	}
	 
	 g.print();
	 


	return 0 ;
}
