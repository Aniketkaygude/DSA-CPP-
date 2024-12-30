#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


bool check(int arr1[26],int arr2[26]){
	for(int i =0 ; i < 26;i++){
		if(arr1[i]!=arr2[i]){
			return 0;
		}
	}
	return 1;
}

bool checkInclusion(string s1, string s2) {
    
	// charachter count array     
    int count1[26]={0};
    for(int i =0;i<s1.length();i++){
     	int index = s1[i] - 'a';
     	count1[index]++;
	 }
	 
	 //traverse s2 string in window of size s1 length and compare
	int i = 0;
	int windowsize = s1.length();
	int count2[26]={0};
	
	//running for first window
	while(i < windowsize && i< s2.length() ){
	        int index = s2[i]-'a';
			count2[index]++;
			i++; 		
	 }
	 
	if(check(count1,count2)){
		return 1;
	}
	
	   // processing remaining window
       while(i<s2.length()){
       	char newchar = s2[i];
       	int index = newchar-'a';
       	count2[index]++;
       	
       	char oldchar = s2[i-windowsize];
       	index = oldchar -'a';
       	count2[index]--;
       	i++;
       		if(check(count1,count2)){
		return 1;
	}
	   }
        return 0;
}
int main(){
	string s1 = "ab";
string	s2 = "eidbaooo";
	
	cout<< checkInclusion( s1,  s2) ;
}