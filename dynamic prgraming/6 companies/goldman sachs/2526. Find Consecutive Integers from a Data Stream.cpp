#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){
 int val = 0, kmax = 0;
    int valCount = 0;
    DataStream(int value, int k) {
        val = value;
        kmax = k;
    }
    
    bool consec(int num) {
        if(num == val)
            valCount++;
        else
            valCount = 0;
        return valCount >= kmax;
    }

	return 0 ;
}
