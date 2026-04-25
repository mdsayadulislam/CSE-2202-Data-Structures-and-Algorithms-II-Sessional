#include<bits/stdc++.h>
using namespace std;

struct Item {
    int weight;
    int value;
};

vector<Item> item;

// Recursive function
int knapsack(int i, int cap){
    // Base case: no items left or no capacity
    if(i == item.size() || cap == 0){
        return 0;
    }

    // Skip case
    int skip = knapsack(i + 1, cap);

    // Take case (if possible)
    int take = 0;
    if(item[i].weight <= cap){
        take = item[i].value + knapsack(i + 1, cap - item[i].weight);
    }

    // Return max of take and skip
    return max(take, skip);
}

int main(){
    int n, capacity;
    cin >> n >> capacity;

    item.resize(n);

    for(int i = 0; i < n; i++){
        cin >> item[i].weight >> item[i].value;
    }

    cout << knapsack(0, capacity) << endl;

    return 0;
}
