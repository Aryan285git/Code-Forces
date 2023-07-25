#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
       int n, m, i, j, k;
       cin>>n;
       vector<long long> v(n);
       for(i=0;i<n;i++)
         cin>>v[i];
       vector<long long> odd,even;
       vector<long long> arr;
       long long op=0,ep=0;
       for(i=0;i<n;i++)
       {
         if(v[i]&1)
         odd.push_back(v[i]);
         else
         even.push_back(v[i]);
       }
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       for(i=0;i<n;i++)
       {
         if(v[i]&1)
         {
            arr.push_back(odd[op]);
            ++op;
         }
         else
         {
       
            arr.push_back(even[ep]);
            ++ep;
         }
       }
       if(is_sorted(arr.begin(),arr.end()))
       cout<<"YES\n";
       else
       cout<<"NO\n";
    }
    return 0;
}