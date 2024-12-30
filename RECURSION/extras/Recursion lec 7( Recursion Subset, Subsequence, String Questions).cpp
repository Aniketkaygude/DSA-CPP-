#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string skipchar(string str ,int s,char c, string ans){
	
	int size = str.size()-1;
	if(s>size){
		return ans;
	}
	
	if(str[s] != c){
		ans+=str[s]; 
	}
		return skipchar( str,s+1,c,ans);
}

void withoutReturningskipchar(string str , int s , char target){
	int size= str.size()-1;
	if(s>size){
		return;
	}
	
		if(str[s]!=target){
		cout<<str[s];
	}
	withoutReturningskipchar(str,s+1,target);

}

int helper(string str , int  s,string  target){
	int size = target.size();
	int j = s;
	for(int i = 0;i<size;i++){
		if(str[j]!=target[i]){
	       return s;
		}
		j++;
	}
	return s+size;
}

string SkipWord(string str,int s, string target , string ans){
	int size = str.size()-1;
	   
	if(s>size){
		return ans;
	}
	if(target[0] == str[s]){		
      s =helper(str,s,target);
      ans = ans+str[s];
	}
	else{
		ans = ans+str[s]; 	
	}
	return SkipWord(str,s+1,target,ans);	
}


int main(){

string str = "baccdah";
string ans ="";
 //ans=skipchar(str,0,'a',ans);
//cout<<ans<<endl;
//withoutReturningskipchar(str,0,'a');

string word = "abcaniketabc";
ans = SkipWord(word,0,"aniket",ans);
cout<<ans;
	return 0 ;
}
