#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

list<int> find(vector<int>nums,int target,int index){
	list<int>ans;
	
	if(index>=nums.size()){
		return ans;
	}	
	
	if(target == nums[index]){
		ans.push_back(index);
	}
	
	list<int>ansfrombelowcalls= find(nums,target,index+1);
	ans.merge(ansfrombelowcalls);
	
	return ans;	
}

int add(vector<int>nums,int target,int index){
		int cnt= 0;
	if(index>=nums.size()){
		return 0;
	}
	if(target ==nums[index]){
		 cnt+=index;
	}
   cnt = cnt+ add(nums,target,index+1);
	return cnt;
}

void pattern1(int r,int c){
	if(r==0 ) {
		return;
	}
	
	if(c<r)  {
		cout<<"* ";
		pattern1(r,c+1);
	}
	else{
	cout<<endl;
	pattern1(r-1,0);
}
 	
}


void pattern2(int r,int c){
	if(r==0 ) {
		return;
	}
	
	if(c<r)  {
		
		pattern2(r,c+1);
		cout<<"* ";
	}
	else{
	pattern2(r-1,0);
	cout<<endl;
}
 	
}


string remove(string s,int index){

	
	if(index>=s.size()){
	    return "";
	}	
	
   char c=s[index];
   if(s[index]!='a'){
      return c+remove(s,index+1);
   }
   else{
   return remove(s,index+1);
   }
   
	   

}

vector<int>merge(vector<int>left,vector<int>right){
	 
	vector<int>ans;
	int i=0;
	int j=0;
	
	while(i<left.size() && j<right.size()){
		ans.push_back( left[i]<right[j]?left[i++]: right[j++]);
	} 
	
	while(i<left.size()){
			ans.push_back( left[i++]);
	}
	while(j<right.size()){
		ans.push_back( right[j++]);
	}
	
	return ans;
}

vector<int> customSort(vector<int>&arr,int s , int e){
	if(s>=e){
		vector<int> base_case;
        base_case.push_back(arr[s]);
		return base_case;
	}

 int mid = s+(e-s)/2;
 
 vector<int>left=customSort(arr,s,mid);
 vector<int>right=customSort(arr,mid+1,e); 
	
  return merge(left,right);
}


void merge2(int *arr,int s,int mid,int e){
	 
	 if(s==e){
	 	return;
	 } 
	 
	 int i =s;
	 int j=mid+1;
	 
	 while(i<mid && j<e){
	 	if(arr[i]>arr[j]){
	 		swap()
		 }
	 	
	 } 
	  
}

void customSort2(int *arr,int s, int e){
	
	if(s>=e){
		return;
	}
	
	int mid=s+(e-s)/2;
	
	customSort2(arr,s,mid);
	customeSort2(arr,mid+1,e);
	
	merge2(arr,s,mid,e);
		
}

int main(){

vector<int>nums={5,4,3,2,1};
//
//for(auto i: find(nums,4,0)){
//	cout<<i<<" ";
//}
//cout<<endl<<" sum --> "<< add(nums,4,0);

//pattern2(4,0);
//
//for(int i:nums){
//	cout<<i<<" ";
//}
//cout<<endl;
//bubble(nums,0,0);
//for(int i :nums){
//	cout<<i<<" ";
//}

//string s="bacdsasqaacad";
// cout<<remove(s,0)<<"\n lenth :- "<<s.size();
 
 //vector<int>arr={10,9,8,7,6,5,4,3,2,1};
//arr=customSort(arr,0,9);


int arr[10]={10,9,8,7,6,5,4,3,2,1};

for(int i=0;i<10;i++){
	cout<<arr[i]<<"  ";
}
              
}
