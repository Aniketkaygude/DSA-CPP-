#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void Permutation(string&s ,int index){
   
   if(index>=s.size()){
   	  cout<<s<<endl;
   	  return;
   }
   
   for(int i=index;i<s.size();i++){
   	swap(s[i],s[index]);
    Permutation(s,index+1);	
   	swap(s[i],s[index]);
   	
   }
	
}

int CntPermutation(string&s ,int index){
   
   if(index>=s.size()){
   	  //cout<<s<<endl;
   	  return 1;
   }
   
   int cnt=0;
  
   for(int i=index;i<s.size();i++){
   	swap(s[i],s[index]);
  cnt=cnt+CntPermutation(s,index+1);	
   	swap(s[i],s[index]); 	
   }
   return cnt;
	
}

void lettercombination(string&s,string p,map<char,string>&m,int index){
	if(index>=s.size()){
		cout<<p<<endl;
		return ;
	}
    
	 string ans1 = m[s[index]];
	 for(int i=0;i<ans1.size();i++){ 
	    p=p+ans1[i];
	    lettercombination(s,p,m,index+1);
	    p.pop_back();
	}	 
}

int CNTlettercombination(string&s,string p,map<char,string>&m,int index){
	if(index>=s.size()){
		return 1;
		
	}
    
    int cnt=0;
	 string ans1 = m[s[index]];
	 for(int i=0;i<ans1.size();i++){ 
	    p=p+ans1[i];
	 cnt +=   CNTlettercombination(s,p,m,index+1);
	    p.pop_back();
	}
	return cnt;	 
}


int main(){
//string s="abcd";
//Permutation(s,0);
//cout<<CntPermutation(s,0);

map<char,string>m;
m['1']="abc";
m['2']="def";
m['3']="ghi";
m['4']="jkl";
m['5']="mno";
m['6']="pqr";
m['7']="stu";
m['8']="vwx";
m['9']="yz";

string s ="12";
lettercombination(s,"",m,0);
cout<<endl<<endl;

cout<<CNTlettercombination(s,"",m,0);
	return 0 ;
}






