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
    cin >> t;
    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vector<int> h(n);c
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        int sum  =0;
        for(int i=0;i<n;i++){
          int diff = abs(H-h[i]);
          bool flag1 = vec.size() && diff;
          bool flag2 = vec.size() && diff%k==0;
          bool flag3 = vec.size() && diff<=(m-1)*k;
          if(vec.size() && flag1 && flag2 && flag3) sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}