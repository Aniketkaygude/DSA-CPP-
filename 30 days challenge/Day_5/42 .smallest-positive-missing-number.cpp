class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        //28, 7 ,-36, 21, -21, -50, 9 ,-32
        
        //  for(int i=0;i<n ;i++){
        //      cout<<arr[i]<<"  ";
        //   } 
        int i=0;
        while(i<n && arr[i]<=0){
            i++;
        }
        
        int mis=1;
        while(i<n && mis<=n+1){
            
            if(i<n && arr[i] == mis){
                
            while(i<n && arr[i] == mis){
                i++;
            }
            
            mis++;
            }
            else{
                return mis;
            }
            
            
        }
        return mis;
         
    } 
};