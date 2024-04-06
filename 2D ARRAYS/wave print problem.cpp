#include<iostream>
using namespace std;

/*
void WavePrint(int m, int n, int arr[5][4])
{
    // Loop to traverse matrix
    for (int j = 0; j < n; j++) {
 
        // If the current column
        // is even indexed, print
        // it in forward order
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        }
 
        // If the current column
        // is odd indexed, print
        // it in reverse order
        else {
            for (int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
 
// Driver Code
int main()
{
    int arr[5][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 },
                      { 17, 18, 19, 20 } };
                      
                      
   cout<<"your array --> "<<endl;
      for(int i=0;i<5;i++){
      	for(int j=0;j<4;j++){
      		cout<<arr[i][j]<<"   ";
		  }
		  cout<<endl;
	  }                
 
    WavePrint(5, 4, arr);
 
    return 0;
}

*/


void waveprint(int array[][3],int row ,int coloumn){
	
	for (int coloumn=0;coloumn<3;coloumn++){
		//for odd (BOTTOM TO UP)
		if(coloumn%2==1){
			for(int row=2;row>=0;row--){
				cout<<array[row][coloumn]<<" ";
			}
		}
		
		//for even(top to down
		else{
				for(int row=0;row<3;row++){
				cout<<array[row][coloumn]<<" ";
			}
		}
		
	}
	
}

int main(){
	int array[3][3];
	
	cout<<" enter your array elements --> "<<endl;
	for(int row=0;row<3;row++){
		for(int coloumn=0;coloumn<3;coloumn++){
			cin>>array[row][coloumn];
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"your array --> "<<endl;
	for(int row=0;row<3;row++){
		for(int coloumn=0;coloumn<3;coloumn++){
			cout<<array[row][coloumn]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"YOUR WAVEPRINT -->  "<<endl;
	waveprint(array,3,3);
}



























