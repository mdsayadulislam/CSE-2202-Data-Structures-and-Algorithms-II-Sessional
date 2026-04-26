#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2) {
    int a = s1.length();
    int b = s2.length();

    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[a][b];
}

int main() {
    string s1 = "ggtyxcy";
    string s2 = "tyc";

    cout << "Length of LCS = " << LCS(s1, s2);

    return 0;
}
