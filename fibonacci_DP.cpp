#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

int dp[100];
int fib(int n){
    if(n == 0 || n == 1) return n;


    if(dp[n] != -1) return dp[n];


    return dp[n] = fib(n-1) + fib(n-2);
}
int main(){
    int n = 45;

    memset(dp, -1, sizeof(dp));

    auto start = high_resolution_clock::now();

    cout << fib(n) << endl;

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time: " << duration.count() << " ms" << endl;
}

