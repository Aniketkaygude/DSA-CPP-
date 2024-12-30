class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    
    
    void sort(vector<int>&nums) {
        
        int s=0;
      int h=nums.size()-1;
      int m=0;
      
      while(m<=h){
          
          if(nums[m] == 0){
              swap(nums[m],nums[s]);
              s++;
              m++;
          }
          else if(nums[m] == 1){
              m++;
          }
          else{
              swap(nums[m],nums[h]);
              h--;
          }
          
      }
    }
    
    Node* segregate(Node *h) {
        
        // Add code here
        
    vector<int>nums;
      
      while(h!= NULL){
          nums.push_back(h->data);
          h=h->next;
      } 
      
      sort(nums); 
      
      Node*head= new Node(nums[0]);
      
      Node*tail=head;
      
      for(int i=1;i<nums.size();i++){
          Node*temp=new Node(nums[i]);
          tail->next =temp;
          tail=tail->next;
      }
      return head;
       
     
        
    }
};
