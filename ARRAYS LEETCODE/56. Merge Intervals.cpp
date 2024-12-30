/* Online C++ Compiler and Editor */
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
vector<vector<int>> ans = {{1,4},{0,2},{3,5}}; 
  
  int i =0;
  
while(i<ans.size()-1){
      int flag=0;
      if(ans[i][1]>=ans[i+1][0]){
      	 

          int mini = min(ans[i][0],ans[i+1][0]);
          int maxi = max(ans[i][1],ans[i+1][1]);
          flag =1;
          ans[i+1][0] = mini;
          ans[i+1][1]=maxi;
          ans.erase(ans.begin()+0);
      }
      
      if(flag == 0){
          i++;
      }
 
}

for(int i =0 ;i<ans.size();i++){
	for(int j =0 ;j<ans[0].size();j++){
		cout<<ans[i][j]<<"  ";
	}
	cout<<endl;
}

   return 0;
}