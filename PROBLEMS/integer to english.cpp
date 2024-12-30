#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

string helper(int n, unordered_map<int,string> &m) {
    if (n == 0) {
        return "Zero";
    }
   
    string ans = "";
    
    if (n >= 10000000) {
        ans = m[n / 10000000] + m[10000000] + helper(n % 10000000, m);
    }
    else if (n >= 100000) {
        ans = m[n / 100000] + m[100000] + helper(n % 100000, m);
    }
    else if (n >= 1000) { 
        ans = m[n / 1000] + m[1000] + helper(n % 1000, m);
    }
    else if (n >= 100) {
        ans = m[n / 100] + m[100] + helper(n % 100, m);
    }
    else if (n >= 20) {
        ans = m[n - n % 10] + helper(n % 10, m);
    }
    else if (n <= 20) {
        ans = m[n];
    }
    
    return ans;
}



int main() {
    int n = 1234567;
    unordered_map<int,string> m;
    m[1] = "One ";  m[40] = "Fourty ";
    m[2] = "Two ";  m[50] = "Fifty ";
    m[3] = "Three ";  m[60] = "Sixty ";
    m[4] = "Four ";  m[70] = "Seventy ";
    m[5] = "Five ";  m[80] = "Eighty ";
    m[6] = "Six ";  m[90] = "Ninety ";
    m[7] = "Seven ";  m[100] = "Hundred ";
    m[8] = "Eight ";  m[1000] = "Thousand ";
    m[9] = "Nine ";  m[100000] = "Million ";
    m[10] = "Ten "; m[10000000] = "Billion ";
    m[20] = "Twenty "; 
    m[30] = "Thirty ";
    m[11] = "Eleven ";
m[12] = "Twelve ";
m[13] = "Thirteen ";
m[14] = "Fourteen ";
m[15] = "Fifteen ";
m[16] = "Sixteen ";
m[17] = "Seventeen ";
m[18] = "Eighteen ";
m[19] = "Nineteen ";
    
    string ans = "";

    cout<<helper(n, m);
    cout << ans;

    return 0;
}