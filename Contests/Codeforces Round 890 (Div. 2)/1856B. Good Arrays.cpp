#include<bits/stdc++.h>
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
        int n; 
        cin>> n;  
        vector<int> v(n); 
        long long sum=0; 
        for(auto &it: v) cin>> it; 
        sort(v.begin(),v.end());
        for(auto it: v) sum+= it;
        for(auto it: v){ 
            if(it==1){ 
                sum-=2; 
            } 
            else
                sum--;
        }
        if(sum<0||n==1){ 
            cout<<"NO"<<endl;  
        } 
        else{ 
            cout<<"YES"<<endl; 
        }    
    }
}