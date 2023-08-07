#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

  int test_cases;
  cin>>test_cases;
  while(test_cases--){
    string str; 
    cin >> str;
    int i = 0;
    while (i < str.length()&&str[i] < '5') {
      i++;
    }
    if (i == str.length()) {
      cout << str << endl;
    }
    else {
      for (int j = i + 1; j < str.length(); j++) {
        str[j] = '0';
      }
      for (int j = i; j > 0; j--) {
        if (str[j] >= '5') {
          str[j - 1] += 1;
          str[j] = '0';
        }
      }
      if (str[0] >= '5') {
        cout << 10;
      }
      else 
        cout << str[0];
      for (int i = 1; i < str.length(); i++) 
        cout << str[i];
      cout << endl;
    }
    }
  return 0;
}