#include<iostream>
using namespace std;
#include<vector>


int intersection(int arr1[],int arr2[],int n,int m)
{
int flag=0;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
				arr2[j]=INT_MIN;
				
				break;
			}
		}
	}
}


int main(){
	
	int arr1[10]={1,2,2,2,3,4};
	int arr2[10]={2,2,3,3};
	intersection(arr1,arr2,6,4);
	
	
	
}

























