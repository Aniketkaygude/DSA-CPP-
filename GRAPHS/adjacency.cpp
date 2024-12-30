#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>

using namespace std;



int main(){
//const int N = 1e3+10;
int n,m;
cout<<"enter the number of vertices --> ";
cin>>n;
cout<<"\nenter the number of edges --> ";
cin>>m;
cout<<endl;

int graph1[100][100]={0}; // for adjacency matrix
int graph2[100][100]={0}; // for adjacency list
vector<pair<int , int>>vec[n];

for(int i =0;i<m;i++){
	int u ,v , wt ;
	cin>>u>>v>>wt;
	
	// for adjacency matrix
	graph1[u][v] = wt;
	graph1[v][u] = wt;	
	
	// for adjacency list
	vec[u].push_back({v,wt});
	vec[v].push_back({u,wt});
	
}

cout<<" adjacency matrix --> "<<endl;
for(int i = 0;i<n;i++){
	for(int j =0;j<n;j++){
		cout<<graph1[i][j]<<"   ";
	}
	cout<<endl;
}
cout<<endl<<endl;
cout<<" adjacency list --> "<<endl;

for(int i=0;i<m;i++){
  cout<<i<<" -->";
	for(auto j:vec[i]){
		cout<<j.second<<" , ";
	}
	cout<<endl;
}


	return 0 ;
}
