#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string ReverseWord(string s){
	 string result = "" ;
	 int i = 0;
	 int n = s.length();
	 
	 while(i<n){
	 	while(i<n && s[i] == ' '){
	 		i++;
		 }
		 
		 int j=i+1;
		 while(j<n && s[j]!=' '){
		 	j++;
		 }
		 string sub = s.substr(i,j-i);
		 if(result.size()==0){
		 	result =sub;
		 }
		 else{
		 	result = sub + " " + result;
		 }
		 i = j+1;
	 }
	 return result;
}


int main(){
	string  s  = " aniket sanjay kaugude ";
	cout<<ReverseWord(s);
}


