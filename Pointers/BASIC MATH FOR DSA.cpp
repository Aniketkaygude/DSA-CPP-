#include<iostream>
using namespace std;

int main(){

int a;
cout<<"enter your number --> ";
cin>>a;
int count=0;
for(int i=2;i<a;i++){
	if (i%2==1){
		count++;
	}
	
}

cout<<"count --> "<<count;
return 0;
}
