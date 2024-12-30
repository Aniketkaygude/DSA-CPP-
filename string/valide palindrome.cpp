#include<iostream>
using namespace std;
#include<cstring>
#include<string>

// VALID PALINDROME


char lower(char ch){
	if(ch>='a' && ch<='z' || ch>='0' && ch<='9'){
		return ch;
	}
	else{
		char temp = ch-'A'+'a';
		return temp;
	}
}

bool valid( char ch){
	if(ch>='a' && ch<='z' || ch>='0' && ch<='9'||ch>='A' && ch<='Z'){
		return true;
	}
	else{
		return false;
	}
}

bool checkpalindrome(string str){
    int s = 0;
    int e= str.length()-1;
    while(s<e){
        if(str[s]!=str[e]){
            cout<<"\n not  a palindrom ";
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    cout<<"\n palindrom ";
}

int main(){
	string s = " Mom ";
	
	string temp = "";
	
	for(int i=0;i<s.size();i++){
      if(valid(s[i])){
      temp.push_back(s[i]);
	  }
	}
	cout<<"before--> "<<temp;
		for(int i=0;i<s.size();i++){
      temp[i]=lower(temp[i]);
	}
		cout<<"\n after--> "<<temp;
		checkpalindrome(temp);
		

}

