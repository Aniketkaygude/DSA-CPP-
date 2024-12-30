#include<iostream>
using namespace std;


int main(){
int target;
int arr[4]={0};
cout<<"enter array elements --> ";
for(int i=0;i<4;i++){
	cin>>arr[i];
}	

cout<<"enter the target element--> ";
	cin>>target;
	
	for(int i=0;i<4;i++){
		
		int first=arr[i];
		for(int j=0;j<4;j++){
				if(first+arr[j]==target){
			cout<<'['<<i<<','<<j<<']';
			return 0;
		}
			
		}
	
		
	}
	
}
