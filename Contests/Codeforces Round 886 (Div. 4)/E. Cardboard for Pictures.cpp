#include <bits/stdc++.h> 
using namespace std; 
#define int  long long int  
  int maxSub(vector<int>& nums) { 
        int n = nums.size(), answer = INT_MIN; 
        for(int i = 0; i < n; i++)  
            for(int j = i, curSum = 0; j < n ; j++)  
                curSum += nums[j], 
                answer = max(answer, curSum);         
        return answer; 
    } 
bool Prime(int  k,int  n,vector<int> vec) 
{ 
    vector<int> v(k,0); 
    for(int  i=0;i<n;i++) 
    { 
       v[vec[i]%k]++;  
    } 
    for(int  i=0;i<k;i++) 
    { 
        if(v[i]<=1) 
        return true; 
    } 
    return false; 
} 
signed main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int  test; 
    cin>>test; 
    for(int i=0;i<test;i++)
    { 
        int  n; 
        int  m=0; 
        int count; 
        int left,right;
        left=0; 
        int sum=0;  
        cin>>n>>count; 
        vector<int> vec(n); 
        for(int i=0;i<n;i++) 
        { 
            cin>>right; 
            vec[i]=right; 
            left+=right*right; 
            sum+=right; 
        } 
         
        count-=left; 
        count=count/4; 
        count=count/n; 
        sum/=2*n; 
        int temp=sqrtl(sum*sum+count); 
        temp-=sum; 
        cout<<temp; 
      cout<<endl; 
    } 
  return 0; 
}