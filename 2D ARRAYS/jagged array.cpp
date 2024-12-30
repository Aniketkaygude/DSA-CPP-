// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int size1,size2;
    cout<<"enter the jagged array size --> ";
   cin>> size1;
    
  int **arr = new int*[size1];
  
  
  int *sub = new int[size1];
  
  for(int  i = 0 ;i<size1;i++){
      cout<<"enter the size of sub array --> ";
      cin>>sub[i];
      arr[i] = new int [sub[i]];
  }
  
  cout<<" \n \n takinf input \n \n";
  
  
  for(int i = 0 ;i<size1;i++){
      for(int j = 0 ; j<sub[i];j++)
      cin>>arr[i][j];
  }
  
    cout<<" \n \n takinf output \n \n";
  for(int i = 0 ;i<size1;i++){
      
      for(int j = 0 ; j<sub[i];j++)
      cout<< arr[i][j]<<" ";
      
      cout<<endl;
  }
  
 
  

    return 0;
}