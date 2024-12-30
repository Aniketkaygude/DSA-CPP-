#include<iostream>
using namespace std;

void update(int **p2){
//	p2=p2+1;
	// change can happen ? - NO
	
//	*p2=*p2+1;
	// change can happen ?- yes
	
	**p2=**p2+1;
	// change can happen ?- yes
	
}

int main(){
	
	int i=5;
	int *p=&i;
	int **p2=&p;
/*	
	cout<<" everything is alright till here"<<endl<<endl;
	cout<<"printing p==>"<<p<<endl<<endl;
  //cout<<"address of p-->"<<&p<<endl;
	cout<<"printing p2-->"<<*p2<<endl<<endl<<endl;
	
	cout<<"printng the value of i"<<endl<<endl;
	cout<<"by using i-->"<<i<<endl;
	cout<<"by using p-->"<<*p<<endl;
	cout<<"by using p2-->"<<**p2<<endl<<endl;
	
	
	cout<<&i<<endl;
	cout<<p<<endl;
	cout<<*p2<<endl;
	*/
	
	cout<<p2<<endl;
	update(p2);
	cout<<p2;
	
	
	
	
	
	
}
