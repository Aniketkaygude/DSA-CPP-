#include<iostream>
#include<string>
#include<vector>

using namespace std;

    int mostWordsFound(vector<string>& sentences) {
    	int size = sentences.size();
    	int i = 0;
    	
    	int max = -1;
    	
    	while(i<size){
    		int cnt = 0;
    		int s = sentences[i].size();
    		int j =0;
    		while(j<s){
    			
    			while(j<s && sentences[i][j]!=' '){
    				j++;
				}
				cnt++;
				while(j<s && sentences[i][j]==' '){
					j++;
				}
			
		}
if(max<cnt){
	max = cnt;
}
	i++;
	}
cout<<max;
}

int main(){
	
	vector<string> arr={"i am aniket" , "hi boy"};
	// cout<<arr[0];
	 
	 
	 
mostWordsFound(arr);
	
}











