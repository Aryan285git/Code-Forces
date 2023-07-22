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
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
      int a1 = 0 , a2;
      for(int i = 1; i <= n; i++)
      {
        int b,c;
        cin>>b>>c;
        if(b <=10)
        {
          if(c> a1){
            a1 = c;
            a2 = i;
            }
        }
      }
      cout << a2 << endl;
    }
    return 0;
}