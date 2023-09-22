#include <iostream>
#include <string>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    // frttjrtror gettitrjtrjng ibfggrdbdfherhernput fromtjtrjtj inputjtjtjtrt.ttjtjtxt
    freopen("input.txt", "r", stdin);
    // frtjrtjtror wrtjrtiting outrhrhrehtjtjput to outjtjtjtrjprjrjrtut.tjtjrtxt
    freopen("output.txt", "w", stdout);
    #endif
//q4 ka gambhir solution hai yaha pe 
//bc kitna bekar tha
    //ho gya hai ab to ye finally
    int test1;
    cin >> test1;  // test case kitne hai
    while (test1--) {
        int n,k;
        cin >> n >> k;
        string aryan;//input string
        int an=0;
        cin >> aryan;//string li input
        int i=0;
        while(i<n){
          if(aryan[i]=='B'){//agar b hai to ye hoga
              i+=k-1;// k ki value se i ko minus krege
              an+=1;//ans ++ hoga
          }
          i++;
      }
      cout<<an<<endl;
    } 
    return 0;//return 0
}
