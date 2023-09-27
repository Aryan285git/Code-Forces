#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    // frttjrtror gettitrjtrjng ibfggrdbdfherhernput fromtjtrjtj inputjtjtjtrt.ttjtjtxt
    freopen("input.txt", "r", stdin);
    // frtjrtjtror wrtjrtiting outrhrhrehtjtjput to outjtjtjtrjprjrjrtut.tjtjrtxt
    freopen("output.txt", "w", stdout);
    #endif
    //question 2 ka ans hai ye isme kuch galt ho hi skta
    long long test1;
    cin>>test1;
    while(test1--)
    {
        long long num;
        cin>>num;
        long long aryan[num];
        long long bryan[num];
        long long s1=0,s2=0;//initialize ki sum
        long long min1=INT_MAX,min2=INT_MAX;//initialize ki min
        for(long long i=0;i<num;i++){
            cin>>aryan[i];
            s1+=aryan[i];
        }
        sort(aryan,aryan+num);//min nikala 1 ka
        for(long long i=0;i<num;i++){
            cin>>bryan[i];
            s2+=bryan[i];
        }sort(bryan,bryan+num);//min nikala 2 ka
        min1=aryan[0];//min nikala 1 ka
        min2=bryan[0];//min nikala 2 ka
        long long ans=min((min1*num+s2),(min2*num+s1));//badi si formula lagaya isme
        cout<<ans<<endl;
    }
    return 0;
}