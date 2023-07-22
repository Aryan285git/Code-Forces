#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=max(c,max(a,b));
        int sum1=min(c,min(a,b));
        int sum3=a+b+c;
        sum=sum3-sum1;
        if(sum>=10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;    
    }
    return 0;
}