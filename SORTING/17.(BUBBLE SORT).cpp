#include<iostream>
using namespace std;

// time complexity O(n sqr)

int bubble(int array[], int size)
{
	
	for(int i=1;i<size;i++){
		
		// FOR ROUND 1 TO n-1
		
		for(int j=0;j<size-i;j++)	{
			// PROCESS ELEMENT TILL size(n)-i
			
			if(array[j]>array[j+1]){
				
			swap(array[j] , array[j+1] );
        }
	
    	}
    	
		}
		
}


int main(){
	int array[10]={0};
	for(int i=0;i<10;i++){
	cin>>array[i];
}
    bubble(array,10);
    
    for(int i=0;i<10;i++){
	cout<<array[i]<<"  ";
}
}


/*
// WITH TIME COMPLEXITY O(n)


int bubble(int array[],int size){
	
	for(int i=1;i<size;i++){
		
	 bool swapped=false;
	
	  for(int j=0;j<size-i;j++){
	  	swap(array[j] , array[j+1]);
	  	swapped=true;
	  }
		if(swapped==false){
		break;	
	}
	

	}
}

int main(){
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	bubble(array,10);
	for(int i=0;i<10;i++){
		cout<<array[i]<<"  ";
	}
}




*/





