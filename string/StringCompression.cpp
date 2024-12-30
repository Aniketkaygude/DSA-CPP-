#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int StringCompression(char chars[]){
	int i  = 0;
	int ansindex = 0;
	int n = strlen(chars);
	
	while(i<n){
		int j = i+1;
		while(j<n && chars[i]==chars[j]){
			j++;
		}
		chars[ansindex++] = chars[i];
		int count = j - i;
		if(count>1){
			string cnt = to_string(count);
			for(char ch:cnt){
				chars[ansindex++] = ch;
			}
		}
		i = j;
	}
	return ansindex;
}

int main(){
	char chars [5]= {'a','a','b','c','c'};
	cout<<"before --> "<<chars<<endl;
	cout<<"after compression --> "<<StringCompression(chars);
}