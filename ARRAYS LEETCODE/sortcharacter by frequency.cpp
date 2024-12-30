#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main(){
string s = "AabbB";

map<char,int>v1;
unordered_map<char,int>v2;

for(char i:s){
	v1[i]++;
	v2[i]++;
}


map<int, map<char,int> >v3;
for(auto i:v1){
	v3[i.second].first=i.first; 
}


for(auto i:v1) {
cout<<i.first<<" --> "<<i.second<<endl;
}
 cout<<endl<<endl;
 for(auto i:v2) {
cout<<i.first<<" --> "<<i.second<<endl;
}

	return 0 ;
}
