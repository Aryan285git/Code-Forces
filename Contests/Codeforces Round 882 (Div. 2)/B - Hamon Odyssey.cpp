#include <bits/stdc++.h>
#include <vector>
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
    while(test--)
    {
        int n;
        cin>>n;
        int m=1;
        while(m<=1e9)
            m=m*2;
        m--;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int k=m;
        for(int i=0;i<n;i++)
        {
            k=k&arr[i];
        }
        int ans=0;
        int curr=m;
        for(int i=0;i<n;i++)
        {
            curr=curr&arr[i];
            if(curr==0)
            {
                ans++;
                curr=m;
            }
        }
        ans+=k>0;
        cout<<ans<<endl;
    }
    return 0;
}
