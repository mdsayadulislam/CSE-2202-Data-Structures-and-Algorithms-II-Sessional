#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>> s;
    int count [26]={0};
    for(i =0; i<s.length();i++){
        count[s[i]-'a']++;
    }
    int max =0;
    char result;
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max= count[i];
            result='a'+i;
        }
        
    }
    cout<< result;

    return 0;
}
