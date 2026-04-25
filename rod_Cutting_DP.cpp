#include<bits/stdc++.h>
using namespace std;

vector<int> price;
int n;

vector<vector<int>> dp;

int RC(int i, int len){

    if(i == n || len == 0){
        return 0;
    }

    if(dp[i][len] != -1){
        return dp[i][len];
    }

    int skip = RC(i + 1, len);

    int take = 0;
    if(i <= len){
        take = price[i] + RC(i, len - i);
    }

    return dp[i][len] = max(take, skip);
}

int main(){
    int len;
    cin >> n >> len;

    price.resize(n + 1);
    dp.assign(n + 2, vector<int>(len + 1, -1));

    for(int i = 0; i <= n; i++){
        cin >> price[i];
    }

    cout << RC(1, len) << endl;

    return 0;
}
