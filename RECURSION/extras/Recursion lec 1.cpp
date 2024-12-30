#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int fact(int n){

	if(n==0){	
	 return 1;
	 }
	 int smaller = fact(n-1);
	 cout<<"smaller --> "<<smaller<<endl;
	 
	int  bigger = n*smaller;
	return bigger;	
}

int power(int n ){
	if(n == 0 ){
		return 1;
	}
	int smaller = power(n-1);
	cout<<" smaller -->  "<<smaller<<endl;
	int bigger  = 2*smaller ;

	return bigger;
}

int main(){
	int n;
	cout<<"enter the number to find the factorial --> ";
    cin>>n;
cout<<fact(n)<<endl<<endl;

   cout<<"enter the number to find the power --> ";
    cin>>n;
cout<<power(n);

	return 0 ;
}
