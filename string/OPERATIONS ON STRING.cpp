#include<iostream>
using namespace std;

void reverse(char array[],int size){
	int start=0;
	int end=size-1;
	
	while(start<=end){
		swap(array[start],array[end]);
		start++;
		end--;
	}
	
	
}

int palindrome(char array[],int size){
int s= 0;
int e=size-1;
while(s<=e){
if(array[s]!=array[e]){

	return 0;
  } 

if(array[s]==array[e]) {
	s++;
	e--;	
}

}
return 1;
}
int length(char array[])  {
	int count=0;
	for(int i=0;array[i]!='\0';i++){
		count++;
	}
	return count;
}

int main(){
int size;

char array[100];
cout<<"enter elements of char type"<<endl;
cin>>array;
cout<<endl<<endl<<"your string is ==>  ";
cout<<array<<endl<<endl ;
int len=length(array);
cout<<"length of string is =-> "<<len<<endl;


reverse(array,len);

cout<<"reverse of your string is --> "<<array<<endl;

int p=palindrome(array,len);
cout<<"palindrome or not --> "<<p;

return 0;


}
