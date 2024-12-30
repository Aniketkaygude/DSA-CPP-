// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<queue>
#include<set>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void adjList(unordered_map<int , set<int>>& adj,vector<pair<int,int>>&edges){
    
    
    for(int i =0;i<edges.size();i++){
        int u = edges[i].first;
      int v = edges[i].second;
      
        adj[u].insert(v);
        adj[v].insert(u);
    }
    cout<<"\nadjancy list created "<<endl<<endl;
   

}

void print(unordered_map<int ,set<int>>& adj){
    for(auto i:adj){
        cout<<i.first<<"--> ";
        for(auto j:i.second){
            cout<<j<<" , ";
        }
        cout<<endl;
    }
}

void bfs(unordered_map<int,set<int>>& adj,vector<bool>& visited,vector<int>&ans, int node){
    
    queue<int>q;
    q.push(node);
    visited[node] = true;
    
    while(!q.empty()){
    
        int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);
            
        for(auto i : adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
            
        }    
    }
    
}

vector<int> BFS(int vertex, vector<pair<int, int>>& edges){
   unordered_map<int , set<int>>adj;
   vector<bool>visited(vertex,false);
   vector<int>ans;
 

 adjList(adj,edges);
  print(adj);
   for(int  i =0 ;i<vertex;i++){
       if(!visited[i]){
           bfs(adj,visited,ans,i);
       }
   }
   
   
   cout<<" BFS Traversal --> ";
  if (!ans.empty()) {
        for (auto i : ans) {
            cout << i << " ";
        }
    }
   
    return ans;
}



void dfs(int i,unordered_map<int,bool>&visited, unordered_map<int,list<int>>&adj , vector<int>&component)
{

    component.push_back(i);
    visited[i] =true;
    
    for(auto j:adj[i]){
        if(!visited[j]){
        dfs(j,visited,adj,component);
        }
    }
    
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    
   vector<vector<int>>ans;
   unordered_map<int,bool>visited;
   
   for(int i =0 ;i<V;i++){
       if(!visited[i]){
           vector<int>component;
        dfs(i,visited,adj,component);
        ans.push_back(component);
       }
   }
   
   
     cout<<" DFS Traversal --> ";
  if (!ans.empty()) {
        for (auto i : ans) {
            cout << i << " ";
        }
    }
   
   return ans;
   
    
}



int main() {
    int vertex,ed=0;
    cout<<"Enter the number of vertex --> "<<endl;
    cin>>vertex;
    
    cout<<"Enter the number of edges --> "<<endl;
    cin>>ed;
    cout<<"\n now enter the pair of edges "<<endl;
    
    vector<pair<int,int>> edges;
    for(int i = 0 ; i<ed;i++){
        int u , v;
        cin>>u>>v;
        edges.push_back({u , v});
    }
    
    
    BFS(vertex,edges);
    DFS(v,e,edges);
    
    

    return 0;
}



