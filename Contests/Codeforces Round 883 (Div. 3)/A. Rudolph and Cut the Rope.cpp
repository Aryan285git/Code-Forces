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
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int answer = 0;
        while(n--)
        {
        int a , b;
        cin >> a >> b;
        if(a > b)
            answer+=1;
        }
        cout<<answer<<endl;
    }
    return 0;
}