#include<iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	int Smallproblem=fact(n-1);
	int Bigproblem=n*Smallproblem;
  return Bigproblem;
}

int power(int n){
	
	if(n==0){
		return 1;
	}
  
  return 2*power(n-1);	
	
}

void count(int n){
	if(n==0){
		return ;
	}
	
  cout<<n<<" ";
  count(n-1);

	
}


int main(){
//cout<<"enter number to find factorial--> "<<endl;
cout<<"enter number to find power--> "<<endl;
int n;
cin>>n;

//int ans=fact(n);	
//cout<<ans<<endl<<endl;	
//int ans2=power(n);
//cout<<"power if 2--> "<<ans2;

count(n);


}