#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class heap{
	public:
		int arr[100];
		int size;
		heap(){
			size = 0;
			arr[0]= -1;
		}
		
		void insert( int data){
			 
			 size = size+1;
			 int index = size;
			 arr[index] = data;
			 while(index>1){
			 	 int parent = index/2;
			 	 if(arr[index] > arr[parent] ){
			 	 	swap(arr[index],arr[parent]);
			 	 	index = parent;
				  }
				  else{
				  	return ;
				  }
			 	
			 }
			
		}
		
	void deletefromheap(){ 
    if(size == 0){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    
    arr[1] = arr[size];
    arr[size] = -1;
    size--;
    
    int i = 1;
    
    while(i <= size){ // Change the condition to i <= size
    
        int leftindex = 2*i;
        int rightindex = 2*i + 1;
        
        // Check if left child index is within bounds
        if (leftindex <= size) {
            int larger = leftindex;
            
            // Check if right child index is within bounds and if it is larger than the left child
            if (rightindex <= size && arr[rightindex] > arr[leftindex]) {
                larger = rightindex;
            }
            
            if (arr[i] < arr[larger]) {
                swap(arr[i], arr[larger]);
                i = larger;
            }
            else {
                return;
            }
        }
        
        else {
            return;
        }
    }
}

		
		void display(){
			for(int i = 1 ;i<=size;i++){
				cout<<arr[i] <<" ";
			}
			cout<<endl;
		}
		
};

void heapify (int *arr , int n , int i){
	
	int largest = i;
	int left= 2*i;
	int right = 2*i+1;
	 
	 if(left<=n && arr[left]>arr[largest]){
	 	largest= left;
	 }
	 
	 if(right<=n && arr[right]>arr[largest]){
	 	largest = right;
	 }
	 
	 if(largest!=i){
	 	swap(arr[i],arr[largest]);
	 	heapify(arr,n , largest);
	 }
	
	
}

void heapsort(int *arr , int n){
	 
	 int size = n;
	 while(size>1){
	 	
	 	// step 1: swap 1st and last element 
	 	 swap(arr[1],arr[size]);
	 	 
	 	 // step 2 : decrement the size;
	 	 size -- ;
	 	 
	 	 // step 3 : heapify the element;
	 	 
	 	    heapify(arr, size ,1);
	 	 
	 	 
	 }
	
}

int main(){
	


cout<<endl;

int arr[6] = {-1,50,55,53,52,54};
 int n = 5;
 for(int i = n/2 ;i>0;i--){ //  from   n/2+1  to n all are child node and they are already heapifyied
 	heapify(arr , n , i);
 }

cout<<"printing array --> ";

for(int i = 1 ;i<=n;i++){
	cout<<arr[i] <<" ";
			}
			cout<<endl;
cout<<endl<<"sorted --> ";
heapsort(arr,n);
for(int i = 1 ;i<=n;i++){
				cout<<arr[i] <<" ";
			}
			cout<<endl;


	return 0 ;
}




