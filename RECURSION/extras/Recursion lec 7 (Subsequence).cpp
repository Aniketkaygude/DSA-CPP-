#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void sq(string p , string u){
	if(u.empty()){
	cout<<p<<endl;
	return ;	
	}
	
	char c =u[0];
	sq(p+c ,u.substr(1));
	sq(p,u.substr(1));
}

void sq1(string str ,int index, string  ans){
	int size = str.size()-1;
	if(index>size){
		cout<<ans<<endl;
		return;
	}
	
	
	//include 
	char c  = str[index];
	sq1(str,index+1,ans+c);
	

		//exclude

		sq1(str,index+1,ans);
}

void sqAscii(string str , string ans){
	
	if(str.empty()){
		cout<<ans<<endl;
		return;
	}
	
	// exxclude
	sqAscii(str.substr(1),ans);
	
	//include
	char c = str[0];
	sqAscii(str.substr(1),ans+c);

 // casting  char
 int asciiValue = static_cast<int>(c);
 
 // to_string (int a) :- this function cast integer into string
    sqAscii(str.substr(1), ans + to_string(asciiValue));
}

int main(){

//sq1("abc",0,"");
sqAscii("abc","");

	return 0 ;
}
