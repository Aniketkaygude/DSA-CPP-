#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long count(int currentvertex, int target, int k, long long dp[4001][1001]) {
    if (k == 0 && currentvertex == target) {
        return 1;
    }
    if (k == 0) {
        return 0;
    }

    if (dp[currentvertex + 1000][k] != -1) {
        return dp[currentvertex + 1000][k];
    }

    long long a = 0;
    if (currentvertex + 1 <= 3000) {
        a += count(currentvertex + 1, target, k - 1, dp);
    }
    if (currentvertex - 1 >= 0) {
        a += count(currentvertex - 1, target, k - 1, dp);
    }

    return dp[currentvertex + 1000][k] = a % 1000000007;
}

int numberOfWays(int startPos, int endPos, int k) {
    long long dp[4001][1001];
    for (int i = 0; i <= 3001; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = -1;
        }
    }

    long long ans = count(startPos, endPos, k, dp);
    return ans % 1000000007;
}

int main() {
    cout << numberOfWays(3, 4, 1) << endl;
    return 0;
}
