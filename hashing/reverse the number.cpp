#include<iostream>
using namespace std;

int main(){
	cout<<"enter the number to reverse --> ";
	int num;
	cin>>num;
	
		
	while(num%10!=0){
		int b=num%10;
		cout<<b<<" ";
     num=num/10;
     
	
	}
	
	
}


