#include<iostream>
using namespace std;


int sum(int arr1[],int m,int arr2[],int n){
	int i=m-1;
	int j=n-1;
	int k=0;
	int ans[m+n]={0};
	int carry=0;
	while(i>=0 && j>=0){
		
	int val1= arr1[i];
	int val2=arr2[j];
	
	int sum = val1 + val2 + carry;
	carry= sum /10;
	sum =sum%10;
	ans[k]=sum;
	k++;
	i--;
	j--;
	}
	
	while(i>=0){
	  int sum=arr1[i]+carry;
	  carry=sum/10;
	  sum=sum%10;
	  ans[k]=sum;
	  i--;
	  k++;
	}
		while(j>=0){
	  int sum=arr2[j]+carry;
	  carry=sum/10;
	  sum=sum%10;
	  ans[k]=sum;
	  j--;
	  k++;
	}
		while(carry!=0){
	  int sum=carry;
	  carry=sum/10;
	  sum=sum%10;
	  ans[k]=sum;
	  k++;
	}
	
	for(int i =0;i=0;i++){
		cout<<ans[i]<<" ";
	}
	
}

int main(){
	int arr1[5]={1,1,1,1,1};
	int arr2[3]={1,2,3};
	
sum(arr1,5,arr2,3);

	
}