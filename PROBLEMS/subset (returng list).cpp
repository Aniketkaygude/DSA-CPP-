#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

list<string>subset(string s,string p,int index){
	
	if(index>=s.size()){
		list<string>ans;
		ans.push_back(p);
		return ans;
	
	}
	
	list<string>include=subset(s,p+s[index],index+1);
	list<string>exclude=subset(s,p,index+1);
	
	include.merge(exclude);
	return include;
}
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
	
//for(string i:subset("abc","",0)){
//	cout<<i<<endl;
//}	


   vector<int> ans = {11, 21, 3, 3, 41};
    map<int, int, decltype(comp)*> m(comp);

    for(int i : ans){
        m[i]++;
    }

    for(auto i : m){
        cout << i.first << endl;
    }

    return 0;
}
