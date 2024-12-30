#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int loop =0 ;
        int sum = 0;
        
        	
            for(int i,j = 0 ;i<row,j<col;j++,i++){ 
                
                    sum = sum +mat[i][j];
                    cout<<mat[i][j]<<" ";
                    mat[i][j] = 0;
                    i++;
                    
            }
            
            for(int i = 0 ;i<row;i++){
			
			for(int j = col-1; j>=0 ; j--){
				sum = sum +mat[i][j];
                    cout<<mat[i][j]<<" ";
                    mat[i][j] = 0;
                    i++;
				
			}
			
			
			}
            
        
			

  cout<<"sum --> "<<sum;
        
    }


int main(){
	vector<vector<int>>mat = {{1,2,3},{4,5,6},{7,8,9}	};
	
	for(int i = 0 ;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	diagonalSum(mat);
	
	return 0 ;
}







