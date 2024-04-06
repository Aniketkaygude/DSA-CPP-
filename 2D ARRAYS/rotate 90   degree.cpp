 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int arr2[3][3]{0};
	
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"before ---> "<<endl;
	for(int i = 0 ; i<sizeof(arr)/ sizeof(arr[0]) ; i++){
		for(int j = 0 ; j<sizeof(arr[i])/ sizeof(arr[0][0]) ;j++){
			cout<<arr[i][j]<<"  ";
			
		}
		cout<<endl;
	}
	int cnt = 0 ;
	int row = 0;
	int col = 0;
	int lastrow =sizeof(arr)/ sizeof(arr[0])-1;
	int lastcol  = sizeof(arr[0])/ sizeof(arr[0][0])-1;
	int size =9;
	
	cout<<"\n rows--> "<<row<<endl;
	cout<<"\n columns --> "<<col<<endl;
	cout<<"size --> "<<size<<endl<<endl<<endl;
    
   while(cnt<size){
   
    	for( int index = lastrow ; index>=row;index-- ){
    		cout<<arr[index][col]<<" ";
    		cnt++;
		}
		cout<<endl;
		 col++;
		 }
//		cout<<endl<<endl;
//    	for( int index = lastrow ; index>=row;index-- ){
//    		cout<<arr[index][col]<<" ";
//    		cnt++;
//		}  
		    	
	
	
	
}

 