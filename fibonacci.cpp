#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

// Step 1: declare dp array (size can be 1000 to avoid complicacy.)

int fib(int n){
    if(n==0 || n==1) return n;

    // Step 2: check if already computed

    // Step 3: compute and store before returning
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 45;

    // initialize dp array with -1

    auto start = high_resolution_clock::now();
    cout << fib(n) << endl;
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time: " << duration.count() << " ms" << endl;
}
