#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

char findTheDifference(string s, string t) {
        if(s.size() == 0){
            return t[0];
        }
        char c;
        for(int i = 0 ; i<t.size() ; i++){ 
            int cnt  = 0;
            int j;
          for( j =0 ; j<s.size();j++){
              if(t[i] ==s[j]){
			  cout<<" T--> "<<t[i]<<endl;
			  cout<<" s--> "<<s[j]<<endl;
              cnt++;
              cout<<"count --> "<<cnt<<endl<<endl;
              }
             
          }
          // cout<<s[i]<<" ";
          if(cnt == 0 || cnt == 1){
          	
             
          }
        
        }
        return c;
    }

int main(){
string s = "abcd";
string t = "abcde";
findTheDifference(s,t);

	return 0 ;
}
