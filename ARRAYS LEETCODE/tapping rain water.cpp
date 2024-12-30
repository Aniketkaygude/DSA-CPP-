#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


int water(vector<int>h){	
int n=h.size();
pair<int,int>mini={0,0};
pair<int,int>maxi={INT_MIN,INT_MIN};

for(int i=0;i<h.size();i++){
	if(h[i]>0){
		mini.first=h[i];
		mini.second=i;
		break;
	}
}
int i=mini.second;
int ans=0;

while(i<n){
	
 int j =i+1;
 while(j<n && h[j]<mini.first){
 	j++;
 }
 


 if(j>=n){
 	break;
 }
 


i++;
while(i<j){
ans=ans+ abs(h[i]-mini.first);
i++;	
} 

//cout<<ans;

i=j;
mini.first=h[i];
mini.second=i;		
	 
}

return ans;
	
	
}

int main(){

vector<int>h={0,1,0,2,1,0,1,3,2,1,2,1};

int ans=water(h);
reverse(h.begin(),h.end());
ans+=water(h);
cout<<ans;
	return 0 ;
}





