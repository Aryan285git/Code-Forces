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
    int test;
    cin >>test;
    for(int i=0;i<test;i++)
    {
      string str;
      char ch;
      for(int i = 0;i< 8; i++)
      {
        for(int j = 0;j< 8; j++)
        {
          cin>>ch;
          if(ch!='.') 
            str= str+ch;
        }
      }
      cout << str<< endl;
    }
}