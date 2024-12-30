#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}
int min(int a , int b){
    return a<b?a:b;
}

    int minimizeSet(int d1, int d2, int u1, int u2)
     {

         long l =1;
         int r = 2000000009;
         int ans=r;
         long lc = (((long)d1 * (long)d2))/ gcd(d1,d2);

         while(l<=r){
             long mid = (l+r) / 2;
             int x = (mid - (mid/d1));
             int y = (mid - (mid/d2));
             int z = (mid-(mid/lc));

             if(x<u1 || y<u2 || z<u1+u2){
                 l = mid+1;
             }
             else{
                 ans = min(ans,mid);
                 r = mid-1;
             }
         }
         cout<< ans;
        
    }

int main(){
    
    int divisor1 = 2;
    int divisor2 = 7;

    int uniqueCnt1 = 1;
    int uniqueCnt2 = 3;
    
minimizeSet(divisor1,divisor2,uniqueCnt1,uniqueCnt2);


    return 0;
}
