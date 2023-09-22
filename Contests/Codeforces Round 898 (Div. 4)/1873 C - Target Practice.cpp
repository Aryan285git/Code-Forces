#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// q3 ka solution hai ye max wale ka
int main() {
    #ifndef ONLINE_JUDGE
    // frttjrtror gettitrjtrjng ibfggrdbdfherhernput fromtjtrjtj inputjtjtjtrt.ttjtjtxt
    freopen("input.txt", "r", stdin);
    // frtjrtjtror wrtjrtiting outrhrhrehtjtjput to outjtjtjtrjprjrjrtut.tjtjrtxt
    freopen("output.txt", "w", stdout);
    #endif
//div 4 is easy huhhh
    int test1;
    cin>>test1;
    while (test1--) {
        char shoot[10][10];
        for(int i= 0;i<10;i++) {
            for(int j=0;j<10;j++) {
                cin>>shoot[i][j];
            }
        }
        int aryan=0;
        for(int i= 0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if (shoot[i][j]=='X') {
                int ans =min(min(i,j),min(9-i,9-j));  // Determine the ans
                    if (ans==0) {
                        aryan+=1;  // bahar wali is 1 point
                    } else if(ans==1) {
                        aryan+=2;  // uske andar is 2 points
                    } else if(ans==2) {
                        aryan+=3;  // uske andar is worth 3 points
                    } else if(ans==3) {
                        aryan+=4;  // uske andar is 4 points
                    } else{
                        aryan+=5;  // noook me is 5 points
                    }
                }
            }
        }
        cout<<aryan<<endl;
    }
    return 0;
}