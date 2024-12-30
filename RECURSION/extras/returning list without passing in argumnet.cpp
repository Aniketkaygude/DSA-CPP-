#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>

using namespace std;

list<int> Rlist(int arr[] , int key , int s ,int size){

list<int>ansl;

if(s>size-1){
	return ansl;
}

if(arr[s] == key){
	ansl.push_back(s);
}

list<int>ansFromBelowCalls = Rlist(arr,key,s+1,size);
ansl.merge(ansFromBelowCalls);
return ansl;
	
}

int main(){

int arr[10] = { 1,2,3,4,4,8};
list<int>ansl = Rlist(arr,4,0,6);
for(auto i:ansl){
	cout<<i<<" ";
}
	return 0 ;
}
