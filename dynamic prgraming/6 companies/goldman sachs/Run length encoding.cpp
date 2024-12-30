#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string encode(string s)
{     
  //Your code here 
  string ans="";
  char c = s[0];
    int cnt = 1;

    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == c) {
            cnt++;
        } else {
            ans = ans + c + std::to_string(cnt);
            if (i < s.size()) {
                c = s[i];
                cnt = 1;
            }
        }
    }
cout<< ans;
  
  
}     

int main(){

encode("aabbccaa");
	return 0 ;
}
