#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool valid(string s) {
    stack<char> st;
    for (char i : s) {
        if (i == '[') {
            st.push(i);
        } else if (!st.empty() && st.top() == '[' && i == ']') {
            st.pop();
        } else {
            return false;
        }
    }
    return st.empty();
}

int helper(string s, int index, int open, int close, int e) {
    if (valid(s)) {
        return 0;
    }
    
    // Base case: when index exceeds string length
    if (index >= s.length()) {
        return INT_MAX; // Return a large value indicating failure
    }
    
    if (s[index] == '[') {
        open++;
    }
    if (s[index] == ']') {
        close++;
    }
    
    int cnt = 0;
    int mini = INT_MAX;
    
    if (close > open) {
        for (int i = e; i >= index; i--) {
            if (s[i] == '[') {
                swap(s[i], s[index]);
                cnt = 1 + helper(s, index + 1, open, close - 1, e);
                swap(s[i], s[index]);
                mini = min(mini, cnt);
            }
        }
    } else {
        cnt = helper(s, index + 1, open, close, e);
        mini = min(mini, cnt);
    }
    
    return mini;
}

string shor(string s) {
    stack<char> st;
    for (char i : s) {
        if (i == '[') {
            st.push(i);
        } else if (!st.empty() && st.top() == '[' && i == ']') {
            st.pop();
        } else {
            st.push(i);
        }
    }
    string ans = "";
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
}

int main() {
	int a = 7;
    int b = 2;
    cout<<(a/b)+1<<endl;
    string s = "]][[]][][[]]]][[][]]][]]][[][][]]]][][[[[]][[[[[[[]]][[[[]][[[]][][][]";
    s = shor(s);
    int open = 0;
    int close = 0;
    int e = s.size() - 1;
    int index = 0;
    cout << helper(s, index, open, close, e);
    return 0;
}
