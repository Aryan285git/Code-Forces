#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// q2 ka solution hai ye max wale ka
int main() {
    #ifndef ONLINE_JUDGE
    // frttjrtror gettitrjtrjng ibfggrdbdfherhernput fromtjtrjtj inputjtjtjtrt.ttjtjtxt
    freopen("input.txt", "r", stdin);
    // frtjrtjtror wrtjrtiting outrhrhrehtjtjput to outjtjtjtrjprjrjrtut.tjtjrtxt
    freopen("output.txt", "w", stdout);
    #endif

    int test1;
    cin>>test1;
    while (test1--) {
        int h;
        cin>>h;
        vector <int>aryan(h);
        for(int i=0;i<h;i++)
            cin>>aryan[i];
        int min=*min_element(aryan.begin(),aryan.end());
        int prod=1;
        bool flag=0;
        for(int i=0;i<h;i++){
            if(flag==0&&aryan[i]==min){
                prod=prod*(min+1);
                flag=1;
            }
            else{
                prod=prod*aryan[i];
            }
        }
        cout<<prod<<endl;
    }
    return 0;
}