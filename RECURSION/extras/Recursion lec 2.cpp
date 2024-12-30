#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int sum(int n){
	if(n<=1){
		return 1;
	}
	return n+sum(n-1);
	
}



int SumOfDigit(int n){

if(n <= 1){
	return 1;
}
//recurrence relation --->  n +SumOfDigit(n);
return n%10+SumOfDigit(n/10);
}




int DigitProduct(int n){
	if(n <=1){
		return 1;
	}
	return (n%10)*DigitProduct(n/10);
}



void print(int n){
	if(n == 0){
		return ;
	}
	cout<<n<<"  ";
	print(--n); 
}



void reverse(int n){
	if(n == 0){
		return;
	}
	cout<<n%10;
	reverse(n/10);
	
}



int S =0;
void reverse2(int n){
	if(n == 0){
		return;
	}
	int rem = n%10;
	
	S = S *10 +rem;
	reverse2(n/10);
	} 
	
	
bool palindrome(int n){
	reverse2(n);
	if(n == S){
		return true;
	}
	return false;
}	
	
int main(){

//cout<<"sum is --> "<<sum(5)<<endl;
//cout<<"sum of digigt is --> "<<SumOfDigit(1342)<<endl;
//cout<<"product of digit is --> "<<DigitProduct(505)<<endl;


//print(5);
//reverse(123);
//cout<<S<<endl;
//reverse2(1234);
//cout<<S;

cout<<palindrome(12);


	return 0 ;
}
