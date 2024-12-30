#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;





bool check(string st){
     int s = 0 ;
     int e = st.size()-1;
     int flag = 0;
     int i =0;
     int j = 0;
    int cnt=0;
     while(s<=e){
     
     if(st[s] == st[e]){
     	
         s++;
         e--;
         
     }
      
     else if(st[s]!=st[e] ){
            cnt++;
		    
          if(st[s+1] == st[e]  && flag == 0 ){
             flag = 1;
             i = s;
             j = e;
             cout<<"count --> "<<cnt<<endl;
             
              
               s++;
               // cout<<"        s -> "<<st[i]<<"  e-->  "<<st[j]<<endl;
         }
         
         else  if(st[s] == st[e-1]  && flag == 0){
              flag = 1;
            
              e --;
         }
         
         else{
         	
         	if(cnt== 2){
         	s = i;
			 e = j -1;	
			 }
			 
			 else if(cnt ==3){
			 	s = i+1;
			 	e = j;
			 }
         	cout<<" hi";
         	
             return false;
          
         }

         }


     } 

return true;
}
    bool validPalindrome(string s) {

      if(s.size()==2){
        return true;
      }

  return  check(s);
        
    }


int main(){

string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
cout<<s<<endl;
 cout<<validPalindrome(s);
 
	return 0 ;
}
