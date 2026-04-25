#include<bits/stdc++.h>
using namespace std;

struct Item {
    int weight;
    int value;
};

vector<Item> item;

// dp[i][cap] = answer from index i with remaining capacity cap
vector<vector<int>> dp;

int knapsack(int i, int cap){
    if(i == item.size() || cap == 0){
        return 0;
    }

    if(dp[i][cap] != -1){
        return dp[i][cap];
    }

    int skip = knapsack(i + 1, cap);

    int take = 0;
    if(item[i].weight <= cap){
        take = item[i].value + knapsack(i + 1, cap - item[i].weight);
    }

    return dp[i][cap] = max(take, skip);
}

int main(){
    int n, capacity;
    cin >> n >> capacity;

    item.resize(n);
    dp.assign(n + 1, vector<int>(capacity + 1, -1));

    for(int i = 0; i < n; i++){
        cin >> item[i].weight >> item[i].value;
    }

    cout << knapsack(0, capacity) << endl;

    return 0;
}
