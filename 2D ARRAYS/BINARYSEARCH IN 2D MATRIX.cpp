#include<iostream>
using namespace std;


int binarysearch(int array[][3],int row,int coloumn,int num){
	int j=0;
	int start=0;
	int total=row*coloumn;
	int end=total-1;
	int mid=start+(end-start)/2;
	while(start<=end){	
	int element=array[mid/coloumn][mid % coloumn];
		if(element == num){
			cout<<"found";
			j=1;
		}
		if (num>element){
		
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	if (j==0){
		cout<<"motb dji";
	}
}



int main(){
	int array[3][3]={1,2,3,4,5,6,7,8,9};
	
binarysearch(array,3,3,4);



}
