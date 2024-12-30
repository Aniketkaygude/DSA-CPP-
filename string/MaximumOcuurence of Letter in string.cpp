#include<algorithm>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

 char getMaxOccuringChar(string s){
	int arr[26]={0};
	
	for(int i =0 ;i<s.size();i++){
		char ch = s[i];
	//lower case
	    int number =0;
	    if(ch>='a' && ch<='z'){
		
	    number=ch-'a';
	    }
	    //upper case
	     if(ch>='a' && ch<='Z'){
		
	    number=ch-'A';
	    }
	    arr[number]++;
	}
	
	int max=-1;
	int ans=0;
	for(int i=0;i<26;i++){
		if(max<arr[i]){
			ans= i;
			max=arr[i];
		}
	}
	return 'a'+ans;
}


int main(){
	string s = " aniekra";
	cout<<getMaxOccuringChar(s);
	
}

