#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int test_cases;
    cin >> test_cases;
    for(int k=0;k<test_cases;k++) {
        int n,element;
        cin>>n;
        vector<int>element_counts(n + 1, 0);

        for (int i =0; i < n; i++) {
            cin>>element;
            if (element<=n) {
                element_counts[element]++;
            }
        }
        vector<int>multiples_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            if (element_counts[i] == 0) 
                continue;
            for (int j = i; j <= n; j += i) {
                multiples_sum[j] =multiples_sum[j]+element_counts[i];
            }
        }

        cout << *max_element(multiples_sum.begin(), multiples_sum.end()) <<endl;
    }

    return 0;
}