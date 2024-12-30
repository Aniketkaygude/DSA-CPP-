#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool Occurrences(string s, string part, int i) {
        for(int j = 0 ;j<part.size();j++){
        	if(s[i+j] != part[j]){
        		return false;
			}
		}
		return true;
    }
    
    
string RemoveOccurences(string &s,string part){
	while(s.length()!=0 && s.find(part)<s.length() ){
		s.erase(s.find(part),part.length());
	}
	return s;
} 

int main(){
	string s = "daabcbaabcbc";
	string  part = "abc";
	int cnt = 0;
	
	for(int i =0 ;i<s.size();i++){
		
		if(s[i] == part[0]){
			
			if(Occurrences(s,part,i)){
            cnt++;
			}
		
		}
	}
	cout<<" count --> "<<cnt<<endl;
	
	cout<<" after removing occurences --> "<<RemoveOccurences(s,part);
cout<<s	;
	
}




