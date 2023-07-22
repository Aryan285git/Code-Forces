#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a%b==0)
			cout<<0<<endl;
		else if(a%b!=0)
		{
			int t=a/b;
			cout<<(b*(t+1)-a)<<endl;
		}
	}

}