
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    int key = 6;
    int flag = 0;
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Found"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"not Found"<<endl;
    }
     return 0;
} out put
