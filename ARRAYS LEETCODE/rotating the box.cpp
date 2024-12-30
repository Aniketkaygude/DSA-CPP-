#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    vector<vector<char>> box = {{'#','.','*','.'},
              {'#','#','*','.'}};
              
              
int row  = box.size();
int col = box[0].size();

cout<<"before --> "<<endl;
           for(int i=0;i<row;i++){
   	for(int j=0;j<col;j++){
   		cout<<box[i][j]<<" ";
	   }
	   cout<<endl;
   }     
  
    
 
   
   for(int  i=0;i<row;i++){
   	
   	for(int j= col-1;j>=0;j--){
   	       int flag =0;
	         if(box[i][j] == '#'){
	         	 
	             int k = j;
				 
				 while(k+1<col && box[i][k+1]!='*' && k+1<col && box[i][k+1]!='#'){
				 	k++;
				 	flag =1;
				 }
				 
				 if(flag == 1){
				 	box[i][k]='#';
				 box[i][j]='.';  
				 }
				   	 
	         	
			 }        
   		
	   }	   
	   
   }
   
    vector<vector<char>> ans(col, vector<char>(row)); // Swap dimensions here
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans[j][i] = box[i][j]; // Swap indices here
            }
        }
        
   cout<<"after --> "<<endl<<endl;
   for(int i=0;i<col;i++){
   	for(int j=0;j<row;j++){
   		cout<<ans[i][j]<<" ";
	   }
	   cout<<endl;
	   
   }

}
