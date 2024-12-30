#include<iostream>
#include<string>
using namespace std;

void reverse(string &s,int n){

for(int i=0;i<n/2;i++){
	swap(s[i],s[n-i]);
}
}

char lower(char s){
	if(s>='a'&&s<='z' || s>='0'&&s<='9'){
		return s;
	}
	else{
		char temp=s-'A'+'a';
		return temp;
	}
}

int checkpalindrome(string str,int size){
	int s=0;
	int e=size-1;
	while(s<e){
		if(lower(str[s])!=lower(str[e])){
			cout<<"false";
			return -1;
		}
		else{
			s++;
			e--;
		}
	}
	cout<<"palindrome ";
}

int main(){
	string s ="";
	cout<<"enter the string ";
	cin>>s;
	int size=s.size();
	checkpalindrome(s,size);
//reverse(s,size);
cout<<s;
}