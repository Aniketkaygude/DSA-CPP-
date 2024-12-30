#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool IsSefldividing(int num){
	int n = num;
	while(n!=0){
		int digit = n%10;
		if(digit == 0 || num%digit!=0){
			return false;
		}
		n = n/10;
	}
	return true;
}

vector<int> selfDividingNumbers(int left, int right) {
        
         vector<int>ans;
         
         for(int  i = left ;i<=right ; i++){
         	
         	if(IsSefldividing(i)){
         		ans.push_back(i);
			 }         	
         	
		 }
        

    return ans;
}


int main(){
	
	vector<int>a = selfDividingNumbers(1,22);

for(int i = 0;i<a.size();i++){
	cout<<a[i]<<" ";
}

cout<<"\n div --> "<<10/10<<endl;
cout<<" mod --> "<<29%10<<endl;
	return 0 ;
}
