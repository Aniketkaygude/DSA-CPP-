#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int fisrtoccurence(vector<int>v,int target,int index){
    
    if (v[index] == target){
        return index;
    }
    if(index>=v.size()){
        return -1;
    }
    
    return fisrtoccurence(v , target,index+1);
    
}

int lastoccurence(vector<int>v,int target,int index){
    
  
    if(index<0){
        return -1;
    }
    
     
      if (v[index] == target){
        return index;
    }
   return lastoccurence(v , target,index+1);
   
    
}


int solve2(int arr[],int size,int target,int index){
 
    if(size == 0){
    	return -1;
	}                                	
	
	      
	 if(target == arr[0]){
	return index;
	 }     
	 
	 return solve2(arr+1,size-1,target,++index);
	
	
	 	
}

void findall( vector<int>v , int target,int index ,vector<int>&ans){
	
	if(index >=v.size()){
		return ;
	}
	
    
   if(v[index]== target){
   	ans.push_back(index);
   }
   
    findall(v,target,index+1,ans);
}

using namespace std;

int main(){
vector<int>v ={1,5,3,4,5,2,1,5 };
  int target ;
  cout<<"enter the target --> ";
  cin>>target;
  cout<<"first occurence of " <<target <<" --> "<<fisrtoccurence(v,target,0)<<endl<<endl;
   cout<<"last  occurence of "<< target<<"--> "<<lastoccurence(v,target,7)<<endl<<endl;
   
  int arr[10]={1,3,4,6,2,5,7,8,10,9};
  
  cout<<" by solve2 -- > "<<solve2(arr,9,target,0)<<endl<<endl<<endl;
  
  vector<int>ans;
  findall(v,target,0,ans);

  cout<<" findll --> ";

 for(int i:ans){
 	cout<<i<<" ";
 }

	return 0 ;
}
