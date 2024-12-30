#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void pattern1(int n){
	
	for(int i=1;i<=n;i++){
	
	   for(int j=1;j<=n-i+1;j++){
	   	cout<<"* ";
	   }
	
		cout<<endl;
	}
	cout<<endl<<endl;
}

void pattern2(int n){
	
	for(int i=1;i<=n;i++){
	
	   for(int j=1;j<=i;j++){
	   	cout<<j <<" ";
	   }
	
		cout<<endl;
	}
	cout<<endl<<endl;
}


void pattern3(int n){

	for(int i=1;i<=2*n-1;i++){
		
		int totalCOL=i>n?2*n-i:i;
		
		for(int j=1;j<=totalCOL;j++ ){
			cout<<"* ";
		}  
		cout<<endl;
		
	      
		
	}
	
}

void pattern4(int n){
	
		for(int i=1;i<=2*n-1;i++){
		int totalCOL=i>n?2*n-i:i;
		
	//	 int noOfspaces =i<n? n-i:i-n;
		 int noOfspaces=n-totalCOL;
		 for(int k=0;k<noOfspaces;k++){
		 	cout<<" ";
		 }
	 	
		for(int j=1;j<=totalCOL;j++ ){
			cout<<"* ";
		}  
		cout<<endl;		
	}
}



void pattern5(int n){
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		
		for(int k=i;k>=1;k--){
			cout<<k<<" ";
		}
		
		for(int h=2;h<=i;h++){
			cout<<h<<" ";
		}
		cout<<endl;	
	} 	
}

void pattern6(int n){
	
		for(int i=1;i<=2*n-1;i++){
	    
		 	int totalCOL=i>n?2*n-i:i;
		  
		 for(int j=1;j<=n-totalCOL;j++){
		 	cout<<"  ";
		 }
		 
		 
		 for(int k=totalCOL;k>=1;k--){
		 	cout<<k<<" ";
		 }	
		 
		 for(int h=2;h<=totalCOL;h++){
		 	cout<<h<<" ";
		 }
		 
		 cout<<endl;
		 
               	} 	
}

void pattern7(int n){
	int orinalN=n;
	n=2*n;
//	n=n*2;

	for(int i=0;i<=n;i++){		
		
		for(int j=0;j<=n;j++){
			
			int distfromleft=j; // column;
			int  distfromtop =i; // row; 
			int distfromright=n-j;
			int distfrombottom = n-i;
			
			int num =orinalN- (min (min(distfromleft,distfromtop) , min(distfromright, distfrombottom)));
			
			cout<<num<<" "; 
			
		}
		cout<<endl;
		
	} 
	 
	
}


int main(){

//pattern1(5);
//pattern2(5);
//pattern3(5);
//pattern4(5);
//pattern5(5);
//pattern6(4);

pattern7(4);
	return 0 ;
}









