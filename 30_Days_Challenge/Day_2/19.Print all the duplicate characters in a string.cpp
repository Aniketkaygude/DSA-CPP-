#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){

string s="How much wood would a woodchuck chuck if a woodchuck could chuck wood?";

unordered_map<char,int>m;

for(char c: s){
	if(c!=' ')
  	m[c]++;
}

for(auto i:m){
cout<<i.first<<", count = "<<i.second<<endl;	
}
	return 0 ;
}

/*
OUTPUT:- 
f, count = 1
i, count = 1
?, count = 1
m, count = 1
w, count = 6
l, count = 2
a, count = 2
u, count = 7
H, count = 1
o, count = 11
d, count = 6
c, count = 10
h, count = 5
k, count = 4
*/
