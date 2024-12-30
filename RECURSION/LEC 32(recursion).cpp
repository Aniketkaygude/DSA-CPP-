#include<iostream>
using namespace std;

/*
void step(int src,int dest){
	if(src==dest){
		cout<<"reached"<<endl;
			return ;
	}
	
	src++;
	
	
	step(src,dest);
	
}

int main(){
	int dest=10;
	int src=1;
	
 step(src,dest);	
	
	
	return 0;
}
*/


// FIBBONACCI SERIES

/*
int fib(int a){
	if(a==0){
		return 0;
	}
	
	if(a==1){
		return 1;
	}
	
	int nextfib=fib(a-1)+fib(a-2);
	
	return nextfib;
	
}

int main(){
	int a;
	cin>>a;
	int i=0;
while(i<a){
	fib(a);
cout<<fib(i)<<" ";
	i++;
}		
}
*/

/*
##problem statement :- you have been given a number of stairs.initially,you
## are at the 0th stair and you need to reach the Nth stair.
##Each time you can either climb one step or two steps.
##Yoy are supposed to return the number of distinct ways you can 
##climb from the 0th step to Nth step.

int countDistinctWayToClimbStairs(long long nstairs)
{
	//base case
	if(nstairs<0){
		return 0;
	}
	
	if(nstairs==0){
		return 1;
	}
	
	//R.C
int ans=countDistinctWayToClimbStairs(nstairs-1)
+countDistinctWayToClimbStairs(nstairs-2);

return ans;
}
*/

int SayDigit(string array[],int n){
	
	//base case
	if(n==0){
		return 0;
	}
	
	//preprocessing 
	int Digit=n%10;
	n=n/10;
	
	//recursive call
	SayDigit(array,n);
	
	cout<<array[Digit]<<"  ";
	
}

int main(){
	cout<<"Enter the number --> "<<endl;
	int n;
	cin>>n;
	
string array[10]={"zero","one","two","three","four","five","six","seven ","eight","nine"};

SayDigit(array,n);

}











