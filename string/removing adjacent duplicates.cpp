#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


string RemoveDuplicates(string &s){
	int i =1 ;
	while(i<s.length()){
		if(s[i]==s[i-1]){
			s.erase(i,1);
			s.erase(i-1,1);
			
			if(i>1){
				i--;
			}
		}else{
			i++;
		}
	}
	return s;
}

int main(){
	string s = "aaaaabbbddghj";
	cout<<"before --> "<<s<<endl;
	cout<<" after --> "<<RemoveDuplicates(s);
}




