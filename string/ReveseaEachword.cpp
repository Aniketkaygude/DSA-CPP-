#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;



    string reverseWords(string &s) {
        int i =0 ;
        int j=0;
        int n = s.size();

        while(i<n){
            while(j<n && s[j]!=' '){
                j++;
            }
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            j=i;
        }
        return s;  
    }



int main(){
	string s  = " aniket sanjay kaygude ";
cout<<reverseWords(s);
}