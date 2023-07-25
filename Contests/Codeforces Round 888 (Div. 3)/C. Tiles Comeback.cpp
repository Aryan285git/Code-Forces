#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin>>test;
    while(test--){
    int n,k;
    cin>>n>>k;     
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int last=n-1;
    int number=0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[0])number++;
        if(number == k){
            last=i;
            break;
        }
    }
    if(number <k){
        cout<<"NO\n";
        continue;
    }else {
        if(arr[0] == arr[n-1]){
            cout<<"YES\n";
            continue;
        }
    }
    number=0;
    for(int i=n-1;i>last;i--){
        if(arr[i] == arr[n-1])number++;
    }
    if(number >=k)cout<<"YES\n";
    else cout<<"NO\n";
     
    }
        return 0;
}