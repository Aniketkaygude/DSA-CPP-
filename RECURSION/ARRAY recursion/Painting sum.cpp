#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(int n , int k)
{
	// base case
	if(n == 1){
		return k;
	}
	if(n==2){
		return k*k;
	}
	
	int same = solve(n-2,k)*(k-1);
	int diff = solve(n-1,k)*(k-1);
	int ans = same + diff;
	return ans;
}

int main(){
int n = 5;
int k =3;
int ans = solve(n,k);

cout<<" ans is "<<ans<<endl;

	return 0 ;
}
