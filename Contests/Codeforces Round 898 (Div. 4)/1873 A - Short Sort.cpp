#include <iostream>
#include <vector>
using namespace std;
// q21 ka solution hai ye gshell sort wale ka
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
        string s;
        cin>>s;
        if(s[0]=='a'||s[1]=='b'||s[2]=='c')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}